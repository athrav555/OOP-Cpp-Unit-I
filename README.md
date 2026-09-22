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
