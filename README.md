# File-Handling-Programs-in-c

C File Handling Programs

## Overview

This repository contains C programs demonstrating file handling operations. These programs help in understanding how to create, write, read, append, and process data using files in C programming.

The programs are useful for:

- Beginners learning C programming
- College laboratory exercises
- Coding interview preparation
- Understanding persistent data storage
- Learning file management concepts

---

## Programs Included

### 1. Write Data to File

This program creates a file and writes student information into it using `fprintf()`.

#### Output Example

```text
Data written successfully
```

#### File Content

```text
Name: Harsha
Marks: 85
```

#### Concepts Used

- File creation
- fopen() in write mode
- fprintf()
- fclose()

---

### 2. Read Data from File

This program reads data from a file using `fscanf()` and displays it on the screen.

#### Output Example

```text
Name = Harsha
Marks = 85
```

#### Concepts Used

- File reading
- fopen() in read mode
- fscanf()
- Data retrieval from files

---

### 3. Append Data to File

This program opens an existing file and appends new log information.

#### Output Example

```text
New log added
```

#### File Content

```text
New log added
New log added
New log added
```

#### Concepts Used

- Append mode
- fopen() with "a"
- Log file management
- Data preservation

---

### 4. Store Marks and Find Highest Score

This program stores marks in a file and then reads the file to determine the highest mark.

#### Output Example

```text
Enter marks:

85
90
78

Highest = 90
```

#### Concepts Used

- Writing numerical data to files
- Reading data from files
- EOF handling
- Data processing using files

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-file-handling-programs/
│
├── write_file.c
├── read_file.c
├── append_file.c
├── find_highest_marks.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- File creation and deletion concepts
- Writing data to files
- Reading data from files
- Appending data to existing files
- EOF handling
- Persistent data storage
- Basic file-based data processing

---

## Future Improvements

Possible future additions:

- Student Record Management System
- Employee Database Using Files
- Binary File Handling
- File Copy Utility
- File Search Operations
- CSV File Processing
- Mini Banking System Using Files

---

## Author

**Harsha G**

Learning:

- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
