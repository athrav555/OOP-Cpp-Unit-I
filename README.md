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
