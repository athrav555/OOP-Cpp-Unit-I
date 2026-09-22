### 🏠 Smart Home Automation & Management System

An advanced, object-oriented C++ program that simulates a centralized smart home ecosystem. It leverages polymorphism, abstract classes, and dynamic memory management to monitor and control various connected household devices.

#### 🚀 Key Features
* **Polymorphism & Abstraction:** Uses an abstract base class (`SmartDevice`) with pure virtual functions (`getSpecificStatus()`) to define a uniform interface for diverse appliances.
* **Derived Device Models:** Implements specialized classes for different hardware components, including `Light` (brightness control), `Thermostat` (temperature monitoring), `Camera` (recording states), and `DoorLock` (security states).
* **Centralized Dashboard Manager:** The `SmartHomeManager` class handles a polymorphic collection of devices (`std::vector<SmartDevice*>`), rendering a clean, formatted terminal dashboard using `<iomanip>`.
* **Real-Time Timestamps:** Automatically tracks and updates the timestamp of the last state change for every individual device using `<ctime>`.
* **Safe Memory Management:** Implements virtual destructors and a custom manager destructor to prevent memory leaks from dynamically allocated objects.

#### 📊 Sample Output
```text
>>> Initializing Smart Home System...

========================================= SMART HOME DASHBOARD ========================================
ID        Type            Location         Power     Device Status            Last Updated
--------------------------------------------------------------------------------------------------------
L101      Light           Living Room      OFF       Brightness: 100%         Tue Sep 22 12:00:00 2026
T201      Thermostat      Hallway          OFF       Temp: 22.0 C             Tue Sep 22 12:00:00 2026
C301      Camera          Front Door       OFF       Status: IDLE             Tue Sep 22 12:00:00 2026
D401      Door Lock       Front Door       OFF       State: LOCKED            Tue Sep 22 12:00:00 2026
========================================================================================================

>>> Executing User Commands (Turning on lights, setting temps, unlocking door)...

========================================= SMART HOME DASHBOARD ========================================
ID        Type            Location         Power     Device Status            Last Updated
--------------------------------------------------------------------------------------------------------
L101      Light           Living Room      ON        Brightness: 75%          Tue Sep 22 12:00:01 2026
T201      Thermostat      Hallway          ON        Temp: 24.5 C             Tue Sep 22 12:00:01 2026
C301      Camera          Front Door       ON        Status: RECORDING        Tue Sep 22 12:00:01 2026
D401      Door Lock       Front Door       OFF       State: UNLOCKED          Tue Sep 22 12:00:01 2026
========================================================================================================
