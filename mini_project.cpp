#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>

using namespace std;

// Helper function to format the timestamp cleanly
string formatTime(time_t rawTime) {
    string t = ctime(&rawTime);
    return t.substr(0, t.length() - 1); // Strip the default trailing newline
}

// ==========================================
// BASE CLASS: SmartDevice
// ==========================================
class SmartDevice {
protected:
    string deviceID;
    string deviceType;
    string location;
    bool isOn;
    time_t lastUpdated;

    // Encapsulated method to update the timestamp whenever a change occurs
    void updateTimestamp() {
        lastUpdated = time(0);
    }

public:
    SmartDevice(string id, string type, string loc) 
        : deviceID(id), deviceType(type), location(loc), isOn(false) {
        updateTimestamp();
    }

    virtual ~SmartDevice() = default; // Virtual destructor for safe memory cleanup

    string getID() const { return deviceID; }

    // Common operational methods
    virtual void turnOn() {
        isOn = true;
        updateTimestamp();
    }

    virtual void turnOff() {
        isOn = false;
        updateTimestamp();
    }

    // Pure virtual function (makes this an Abstract Class)
    virtual string getSpecificStatus() const = 0;

    // Display row for the dashboard
    virtual void displayRow() const {
        cout << left << setw(10) << deviceID 
             << setw(15) << deviceType 
             << setw(15) << location 
             << setw(10) << (isOn ? "ON" : "OFF") 
             << setw(25) << getSpecificStatus() 
             << formatTime(lastUpdated) << endl;
    }
};

// ==========================================
// DERIVED CLASSES
// ==========================================

class Light : public SmartDevice {
private:
    int brightness; // 0 to 100%

public:
    Light(string id, string loc) : SmartDevice(id, "Light", loc), brightness(100) {}

    void setBrightness(int level) {
        brightness = (level < 0) ? 0 : (level > 100) ? 100 : level;
        updateTimestamp();
    }

    string getSpecificStatus() const override {
        return "Brightness: " + to_string(brightness) + "%";
    }
};

class Thermostat : public SmartDevice {
private:
    double temperature;

public:
    Thermostat(string id, string loc) : SmartDevice(id, "Thermostat", loc), temperature(22.0) {}

    void setTemperature(double temp) {
        temperature = temp;
        updateTimestamp();
    }

    string getSpecificStatus() const override {
        // Truncate decimal to 1 place for display
        string tempStr = to_string(temperature);
        return "Temp: " + tempStr.substr(0, tempStr.find('.') + 2) + " C";
    }
};

class Camera : public SmartDevice {
private:
    bool isRecording;

public:
    Camera(string id, string loc) : SmartDevice(id, "Camera", loc), isRecording(false) {}

    void toggleRecording(bool record) {
        isRecording = record;
        updateTimestamp();
    }

    string getSpecificStatus() const override {
        return isRecording ? "Status: RECORDING" : "Status: IDLE";
    }
};

class DoorLock : public SmartDevice {
private:
    bool isLocked;

public:
    DoorLock(string id, string loc) : SmartDevice(id, "Door Lock", loc), isLocked(true) {}

    void lockDoor() {
        isLocked = true;
        updateTimestamp();
    }

    void unlockDoor() {
        isLocked = false;
        updateTimestamp();
    }

    string getSpecificStatus() const override {
        return isLocked ? "State: LOCKED" : "State: UNLOCKED";
    }
};

// ==========================================
// MANAGER CLASS: SmartHomeManager
// ==========================================
class SmartHomeManager {
private:
    vector<SmartDevice*> devices;

public:
    ~SmartHomeManager() {
        // Clean up dynamically allocated memory
        for (auto device : devices) {
            delete device;
        }
    }

    void addDevice(SmartDevice* device) {
        devices.push_back(device);
    }

    void displayDashboard() const {
        cout << "\n========================================= SMART HOME DASHBOARD =========================================" << endl;
        cout << left << setw(10) << "ID" 
             << setw(15) << "Type" 
             << setw(15) << "Location" 
             << setw(10) << "Power" 
             << setw(25) << "Device Status" 
             << "Last Updated" << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl;
        
        for (const auto& device : devices) {
            device->displayRow();
        }
        cout << "========================================================================================================\n" << endl;
    }
};

// ==========================================
// MAIN FUNCTION (Simulation)
// ==========================================
int main() {
    SmartHomeManager home;

    // 1. Initialize and add devices to the manager
    Light* livingRoomLight = new Light("L101", "Living Room");
    Thermostat* hallThermo = new Thermostat("T201", "Hallway");
    Camera* frontDoorCam = new Camera("C301", "Front Door");
    DoorLock* mainDoor = new DoorLock("D401", "Front Door");

    home.addDevice(livingRoomLight);
    home.addDevice(hallThermo);
    home.addDevice(frontDoorCam);
    home.addDevice(mainDoor);

    cout << ">>> Initializing Smart Home System..." << endl;
    home.displayDashboard();

    // 2. Simulate User Operations (Switching on/off, changing states)
    cout << ">>> Executing User Commands (Turning on lights, setting temps, unlocking door)..." << endl;
    
    livingRoomLight->turnOn();
    livingRoomLight->setBrightness(75);

    hallThermo->turnOn();
    hallThermo->setTemperature(24.5);

    frontDoorCam->turnOn();
    frontDoorCam->toggleRecording(true);

    mainDoor->unlockDoor(); // User arrives home

    // 3. Display Updated Dashboard
    home.displayDashboard();

    return 0;
}
