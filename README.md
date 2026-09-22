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
Program 01
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


