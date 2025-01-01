# Attendance Monitoring System
A simple C program to manage and monitor attendance records. The application allows you to add, view, search, and delete attendance records for students or employees.
## Description
This program is a basic implementation of an attendance monitoring system. It supports the following functionalities:

- Add a new attendance record
- Display all attendance records
- Search for a specific record by ID
- Delete an attendance record

## Features
- Add Record: Allows you to add a new attendance record to the list.
- Display Records: Displays all attendance records currently in the system.
- Search Record: Search for an attendance record by ID.
- Delete Record: Delete an attendance record by ID.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
### Prerequisites
1. C Compiler: Make sure GCC (or any C compiler) is installed.
2. Operating System: Compatible with Windows, Linux, or macOS.
### Steps to Run
1. Clone the Repository:
```bash
git clone https://github.com/ShravanDalavi/CProgrammingProjects.git
cd projects/Attendance%20Monitoring%20System
```

2. Compile the Script: Use the following command to compile the attendance.c file:
```bash
gcc -o attendance attendance.c
```
 3.Run the Script:
- On Windows:
```bash
attendance.exe
```
- On Linux/Mac:
```bash
./attendance
```
4. Follow the Menu:

- After running the program, select an option from the menu to perform desired operations like adding, viewing, or updating attendance.
   
## Output
```mathematica
Attendance Monitoring System
1. Add Record
2. Display Records
3. Search Record
4. Delete Record
5. Exit
Enter your choice: 1
Enter ID: 101
Enter Name: John
Enter 1 for Present or 0 for Absent: 1
Record added successfully!

Attendance Monitoring System
1. Add Record
2. Display Records
3. Search Record
4. Delete Record
5. Exit
Enter your choice: 2
ID      Name            Status
-----------------------------
101     John            Present
```
