# Personal Expense Tracker (C)

A command-line based **Personal Expense Tracker** written in **C**.
This project allows users to record, manage, search, and analyze their expenses while practicing core C programming concepts.

The goal of this project is to strengthen **fundamental programming skills in C** before transitioning to C++.

---

## Features

* Add new expenses
* View all recorded expenses
* Search expenses by ID
* Delete expenses
* Display expense summary
* Save expenses to file
* Load expenses from file

---

## Technologies Used

* C Programming Language
* Standard Libraries:

  * `stdio.h`
  * `stdlib.h`
  * `string.h`
  * `ctype.h`

---

## Concepts Practiced

This project focuses on strengthening core programming concepts:

* Structures (`struct`)
* Arrays
* Pointers
* File Handling (`fread`, `fwrite`)
* Input validation
* Searching and deletion algorithms
* Modular programming using functions

---

## Program Menu Example

```text
1. Add Expense
2. View Expenses
3. Search Expense
4. Delete Expense
5. Show Summary
6. Save to File
7. Load from File
8. Exit
```

---

## How to Compile and Run

### Compile

```bash
gcc main.c -o expense_tracker
```

### Run

```bash
./expense_tracker
```

---

## Example Expense Structure

```c
typedef struct {
    int id;
    char title[50];
    char category[30];
    float amount;
    char date[15];
} Expense;
```

---

## Learning Purpose

This project was created as part of a learning journey to:

* Build strong **foundations in C programming**
* Practice **real-world style projects**
* Improve understanding of **data management using files**

It follows earlier practice projects like:

* Student Management System
* Inventory Management System

---

## Future Improvements

Possible enhancements for the project:

* Sorting expenses by date or amount
* Monthly budget tracking
* Category-wise statistics
* Improved file format and data validation
* Transitioning the project to **C++ with OOP concepts**

---

## Author

Created by a Computer Science student as part of a personal coding roadmap.

---
