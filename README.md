# Data Structures and Algorithms Assignments  

This repository contains all our weekly group assignments for the **Data Structures and Algorithms** course unit.  

## **Group Members**  
1. **Shiv Rajesh Jadhav**  
2. **Bablo Muammar Omar**  
3. **Jane Francis Namutebi**  
4. **Aisha Nakidde**  
5. **Apio Cynthia Penelope**  

---

## **📂 Table of Contents (Click to Expand)**  

<details>
  <summary>📌 Introduction</summary>

  - [Introduction to Data Structures and Algorithms](#introduction-to-data-structures-and-algorithms)  
  - [Assignment 1](#assignment-1)  
  - [Assignment 2](#assignment-2)  
  - [Output Screenshots](#output-screenshots)  

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

### **Assignment 3**
Write an algorithm for a program that swaps two numbers and the pseudo code for this program.

**Soln: Using C programing pointers**
**ALGORITHM**
Step1; START
Step 2; Declare two integer variables a and b.
STEP 3; Ask user to input the valus for a and b.
     -> Display a and b before swapping.
STEP 4; Declare function swap (int *x, int *y) to swap values using pointers.
     -> Store *x 'Value of a' in a temporary variable 'temp'.
     -> Assign *x = *y 'Swap values of b into a'.
     -> Assign *y = temp 'Assign stored values of a into b'.
STEP 5; Call the swap function passing the address of a and b.
STEP 6; Print values after swapping.
STEP 7; END.

**PSEUDO CODE FOR THE PROGRAM**
Step 1; Declare a, b as integers.
Step 2; PRINT "Enter the value of a"
      ->INPUT a.
      PRINT "Enter the value of b"
      ->INPUT b.
      PRINT "Before swapping, a is 'a', b is 'b'".
Step 3; Call swap (address of a, address of b).
Step 4; PRINT ""After swappin: a= ",a "b=",b.
END

FUNCTION swap (POINTER x, POINTRR y)
    TEMP <-    Value at x.
    Value at x <-Value at y.
    Value at y <- Temp.
END FUNCTION.
      
