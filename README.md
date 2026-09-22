# OOP-Cpp-Unit-I
Student Name: Atharv Sachin Kathale

PRN:125UET1085

Class/Division:S.Y-C

Course Name:OOPs

Unit I 

### List of programs 
Real-Time Application 1: Smart Agriculture Sensor Monitor

Real-Time Application 2: Student Attendance Management System

Real-Time Application 3: E-Commerce Product Catalog

Mini-Project: Smart Home Device Manager

Brief description of each program

### Program 01

### 🌱 Soil Moisture Monitoring System

A lightweight, object-oriented C++ program designed to simulate and manage real-time data collection from multiple soil sensors in an agricultural environment.

#### 🚀 Key Features
* **Encapsulation:** Secures sensor properties (`sensorId`, `moistureLevel`, `timestamp`) using private access specifiers, exposing them safely through controlled methods.
* **Dynamic Management:** Leverages `std::vector` and `emplace_back` to efficiently store and scale multiple sensor instances.
* **Real-Time Updates:** Includes methods to update and track changing moisture levels and timestamps dynamically.
* **Const Correctness:** Implements `const` member functions (`displayData()`) to guarantee data integrity during read operations.

#### 📊 Sample Output
```text
=== Morning Sensor Readings ===
Sensor: S001 | Moisture: 45.2% | Time: 08:00
Sensor: S002 | Moisture: 52.8% | Time: 08:00
Sensor: S003 | Moisture: 38.5% | Time: 08:00

=== Updated Reading ===
Sensor: S001 | Moisture: 47.5% | Time: 09:00
```
### program 02
### 📚 Student Attendance Management System

A simple, object-oriented C++ program designed to track, manage, and calculate student attendance percentages dynamically.

#### 🚀 Key Features
* **Encapsulation:** Secures student details and attendance metrics (`rollNo`, `name`, `totalDays`, `presentDays`) using private access specifiers.
* **Dynamic Tracking:** Easily records daily attendance status (present/absent) and incrementally updates statistics using member functions.
* **Safe Computations:** Automatically calculates attendance percentages while safely handling division-by-zero edge cases.
* **Const Correctness:** Implements `const` member functions (`getAttendancePercentage()`, `display()`) to ensure internal data remains protected during read operations.

#### 📊 Sample Output
```text
=== Attendance Report ===
Roll: 101 | Name: Atharv | Attendance: 66.6667%
Roll: 102 | Name: mina | Attendance: 100%
```
### program 03

### 🛒 Product Inventory & Catalog System

A robust, object-oriented C++ program designed to manage product details, monitor inventory stock, and track active catalog instances globally using static class members.

#### 🚀 Key Features
* **Encapsulation:** Protects sensitive product information (`productId`, `productName`, `price`, `stockQuantity`) using private access modifiers.
* **Static Member Tracking:** Uses a static variable (`totalProducts`) and a static member function (`getTotalProducts()`) to maintain a real-time count of active product instances.
* **Inline Optimization:** Employs the `inline` keyword for high-frequency getter methods to improve execution efficiency.
* **Automatic Resource Management:** Implements a destructor that automatically decrements the product count when objects are destroyed.
* **Const Correctness:** Utilizes `const` member functions to guarantee data safety during read and display operations.

#### 📊 Sample Output
```text
=== Product Catalog ===
ID: 1001 | Product: Laptop | Price: Rs. 55000 | Stock: 15
ID: 1002 | Product: Mouse | Price: Rs. 450 | Stock: 50
ID: 1003 | Product: Keyboard | Price: Rs. 1200 | Stock: 30

Total Products in Catalog: 3
```
### Mini-Project

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
