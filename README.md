# Data Structures and Algorithms Assignments  

This repository contains all our weekly group assignments for the **Data Structures and Algorithms** course unit.  

## **Group Members**  
1. **Shiv Rajesh Jadhav**  
2. **Bablo Muammar Omar**  
3. **Jane Francis Namutebi**  
4. **Aisha Nakidde**  
5. **Apio Cynthia Penelope**
6. **Nsimbi Ronald**  

---

## **📂 Table of Contents (Click to Expand)**  

<details>
  <summary>📌 Introduction</summary>

  - [Introduction to Data Structures and Algorithms](#introduction-to-data-structures-and-algorithms)  
  - [Assignment 1](#assignment-1)  
  - [Assignment 2](#assignment-2)
  - [Assignment 3](#assignment-3)  
  - [Output Screenshots](#output-screenshots)
  - [Assignment 4](Introduction/quadratic_algorithm.txt) 

</details>

---

## **📅 26th February 2025**  

## **Introduction to Data Structures and Algorithms**  

### **Assignment 1**  
📁 *Files can be found in the [`Introduction/`](Introduction/) directory in the repo.*  

✍ **Task:**  
Write a C program that calculates the average marks of a student in three subjects: **Physics, Chemistry, and Math**.  
Each subject has four tests:  
- **Assignment**  
- **Course Work**  
- **Midterm Exam**  
- **End of Term Exam**  

### **Output Screenshots**  
#### **Screenshot 1**  
![Screen 1](screenshots/Average_marks1.png)  

#### **Screenshot 2**  
![Screen 2](screenshots/Average_marks2.png)  

---

### **Assignment 2**  
✍ **Task:**  
Write a C program that accepts a group of N domestic animals and a group of X wild animals.
Your program should print N + X animals after entering each group  

#### **Output Screenshot**  
![Output Assignment 2](screenshots/Merge_array.png)  

---
## **📅 04th March 2025** 
### **Assignment 3**
Write an algorithm for a program that swaps two numbers and the pseudo code for this program.

### 🖥 **Algorithm**  

1. **START**  
2. Declare two integer variables `a` and `b`.  
3. Ask the user to input values for `a` and `b`.  
   - Display `a` and `b` before swapping.  
4. Declare function `swap(int *x, int *y)` to swap values using pointers:  
   - Store `*x` (value of `a`) in a temporary variable `LOC1`.  
   - Assign `*x = *y` (swap value of `b` into `a`).  
   - Assign `*y = LOC1` (assign stored value of `a` into `b`).  
5. Call the `LOC1` function, passing the addresses of `a` and `b`.  
6. Print values after swapping.  
7. **END**  

---

### 🖥 **Pseudo Code**  

plaintext
BEGIN
  DECLARE a, b as integers
  PRINT "Enter the value of a"
  INPUT a
  PRINT "Enter the value of b"
  INPUT b
  PRINT "Before swapping, a = ", a, " b = ", b

  CALL swap(address of a, address of b)

  PRINT "After swapping: a = ", a, " b = ", b
END

FUNCTION swap (POINTER x, POINTER y)
    LOC1 <- Value at x
    Value at x <- Value at y
    Value at y <- LOC!
END FUNCTION

## 📅 15th March 2025
### **Assignment 4**
**Task:**  
Derive the program steps for a quadratic time complexity algorithm.

**Solution:**  
The explanation can be found in [`Assignment_4`](Introduction/quadratic_algorithm.txt).
