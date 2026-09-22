# OOP-Cpp-Unit-I
Student Name: Atharv Sachin Kathale
PRN:125UET1085
Class/Division:S.Y-C
Course Name:OOPs
Unit I 

List of programs 
Real-Time Application 1: Smart Agriculture Sensor Monitor
Real-Time Application 2: Student Attendance Management System
Real-Time Application 3: E-Commerce Product Catalog

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
