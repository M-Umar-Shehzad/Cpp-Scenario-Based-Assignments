# Simple-Student-Result-Management-System
# Student Result Management System

A simple C++ console application designed to efficiently calculate and manage student academic results at a basic level. This project demonstrates the use of control structures, input validation, and logical processing to handle student data.

## Project Overview

This program calculates results for a class of students based on marks obtained in **5 specific subjects**. It automates the process of generating totals, percentages, and grades, while also providing a final summary of the class performance.

**Subjects:** English, Chemistry, Mathematics, Physics, and Biology.

## Key Features

* **Multi-Student Processing:** Capable of handling data for any number of students in a single session.
* **Smart Input Validation:** Ensures marks are entered correctly (0–100). If invalid data is detected, the system prompts for a correction.
* **Automated Grading:** Instantly calculates Total Marks, Percentage, and Letter Grade.
* **Class Summary:** Generates a final report showing the total number of students who passed and failed.
* **Highest Achiever:** Automatically tracks and displays the name of the student with the highest percentage.

## Grading Criteria

The system assigns grades based on the following percentage breakdown:

| Percentage Range | Grade | Status |
| :--- | :---: | :--- |
| **85% and above** | **A** | Pass |
| **70% – 84%** | **B** | Pass |
| **50% – 69%** | **C** | Pass |
| **40% – 49%** | **D** | Pass |
| **Below 40%** | **F** | Fail |

## Core Concepts:
    * `if-else` (Conditional Logic)
    * `for` and `while` loops (Iteration & Validation)

## Sample Output

```text
Enter the Number of students : 2

Enter The name of the student 1 : Ali
Enter the marks of English : 90
Enter the marks of Urdu : 85
Enter the marks of Maths : 88
Enter the marks of Physics : 92
Enter the marks of Biology : 80

============================

Ali has obtained a Total of 435 marks out of 500
He/she has obtained a 87 percentage
And has obtained an A grade
Status = Pass

============================

... [Next Student Processed] ...

           **CLASS RESULT SUMMARY**

The Number of students passed in the class : 2

While The Number of Students who failed are : 0

The highest percentage in class is 87 obtained by Ali
