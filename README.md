# OOP Lab 2 – Classes, Objects, and Member Functions

**Santoshi Swain**

**ID**:b125113

CSE-b2


This repository contains the solutions for **Object Oriented Programming Laboratory – Lab 2** using **C++**.

The programs demonstrate the fundamental concepts of **Object-Oriented Programming (OOP)**, including **classes, objects, data members, and member functions**.

##  Lab Information

* **Institute:** International Institute of Information Technology, Bhubaneswar
* **Department:** Computer Science and Engineering
* **Course:** Object Oriented Programming Laboratory
* **Lab:** Lab 2 – C++ Programming: Classes & Objects
* **Semester:** B.Tech 3rd Semester
* **Section:** CSE B2
* **Date:** 04 August 2026

##  Requirements

* C++ Compiler
* Any C++ IDE or code editor
* Basic knowledge of C++ and OOP concepts

##  Programs Included

### 1. Student Information System

A `Student` class is used to store and display:

* Roll Number
* Name
* Marks obtained in one subject

### 2. Rectangle Calculator

A `Rectangle` class is used to:

* Read length and breadth
* Calculate area
* Calculate perimeter
* Display the results

### 3. Simple Calculator

A `Calculator` class performs:

* Addition
* Subtraction
* Multiplication
* Division

The program also handles division by zero.

### 4. Bank Account Management

A `BankAccount` class manages:

* Account Number
* Account Holder Name
* Balance

Operations include:

* Entering account details
* Depositing money
* Withdrawing money
* Displaying updated account details

The program prevents withdrawal when the requested amount exceeds the available balance.

### 5. Employee Salary Calculator

An `Employee` class maintains:

* Employee ID
* Employee Name
* Basic Salary

The program calculates:

* HRA = 20% of Basic Salary
* DA = 10% of Basic Salary
* Gross Salary = Basic Salary + HRA + DA

### 6. Distance Addition

A `Distance` class is used to:

* Input two distances in feet and inches
* Add the two distances
* Convert inches into feet when inches are 12 or more
* Display the final distance

### 7. Product Inventory Management

A `Product` class manages:

* Product ID
* Product Name
* Quantity Available
* Price per Unit

The program can:

* Accept product details
* Display product details
* Update quantity after a sale
* Calculate total inventory value

### 8. Library Book Management System

A `LibraryBook` class manages:

* Book ID
* Book Title
* Student Name
* Number of Days Issued

The program calculates late-return fines:

* No fine for the first 15 days
* ₹2 per day for each additional day

### 9. Student Result Processing System

A `StudentResult` class stores:

* Student Name
* Roll Number
* Marks in Five Subjects

The program calculates:

* Total Marks
* Percentage
* Grade

Grade criteria:

| Percentage    | Grade |
| ------------- | ----- |
| 90% and above | A     |
| 80–89%        | B     |
| 70–79%        | C     |
| 60–69%        | D     |
| Below 60%     | F     |

### 10. Electricity Bill Generator

An `ElectricityBill` class stores:

* Consumer Number
* Consumer Name
* Units Consumed

The electricity bill is calculated using slab-wise rates:

| Units Consumed  | Rate         |
| --------------- | ------------ |
| First 100 units | ₹5 per unit  |
| Next 100 units  | ₹7 per unit  |
| Above 200 units | ₹10 per unit |

For example, for 250 units:

`(100 × ₹5) + (100 × ₹7) + (50 × ₹10) = ₹1700`

## 🎯 Learning Objectives

Through these programs, I practiced:

* Creating classes in C++
* Creating and using objects
* Declaring data members
* Defining member functions
* Taking input from users
* Performing calculations using class methods
* Applying conditional statements
* Implementing basic data validation
* Formatting program output
* Understanding real-world applications of OOP concepts

## ▶️ How to Run

1. Clone this repository.
2. Open the project in a C++ compatible IDE or code editor.
3. Navigate to the required program.
4. Compile the C++ file.
5. Run the program and provide the required input.

Example using the terminal:

```bash
g++ program.cpp -o program
./program
```

## 📌 Concepts Covered

* Classes
* Objects
* Data Members
* Member Functions
* Encapsulation
* Conditional Statements
* Arithmetic Operations
* User Input and Output

## 👩‍💻 Author

**Santoshi Swain**


B.Tech – Computer Science and Engineering
International Institute of Information Technology, Bhubaneswar

---


