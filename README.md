![Screenshot 2025-04-01 201455](https://github.com/user-attachments/assets/0da1d3dd-e6a2-4f4c-a9ad-6e57063079e0)
![Screenshot 2025-04-01 201519](https://github.com/user-attachments/assets/481e27a2-afb4-4151-9b6b-d9b0c4b1e173)
![Screenshot 2025-04-01 201902](https://github.com/user-attachments/assets/aec8a7ac-a115-4db5-8706-c92753823e32)
![Screenshot 2025-04-01 202034](https://github.com/user-attachments/assets/fd067e0f-eb7a-477d-bd0e-74d4f6a810d1)
![Screenshot 2025-04-01 202055](https://github.com/user-attachments/assets/b101c69c-b945-4559-95c7-23b3f7cf75b6)



Student Management System Documentation

Overview

The Student Management System is a C++ program that allows users to manage student records, including adding, displaying, searching, and removing student details. The program utilizes templates to handle different data types flexibly.

Features

Add student details (ID and Name)

Display all stored student records

Remove a student by ID

Search for a student by ID

Exit the program

Classes and Functions

StudentSystem<T> (Base Class)

This template class manages student data storage.

Attributes:

vector<T> sid; – Stores student IDs

vector<T> sname; – Stores student names

Constructor:

StudentSystem() – Initializes the system and displays a success message.

Destructor:

~StudentSystem() – Cleans up resources and displays a message upon object destruction.

Students<T> (Derived Class)

Inherits from StudentSystem<T> and implements core functionalities.

Member Functions:

1. void studentAdd()

Prompts the user to enter the number of students.

Takes input for student ID and Name.

Stores details in sid and sname vectors.

2. void studentDisplayAll()

Checks if any student records exist.

Displays all student IDs and names.

If no records exist, prints "No student information available."

3. void studentRemove()

Takes input for a Student ID.

Searches for the ID in the list.

If found, removes the student details and displays a success message.

If not found, prints an error message.

4. void studentSearch()

Prompts the user to enter a Student ID.

Searches for the ID in the system.

If found, displays the student details.

If not found, prints an error message.

main() Function

The main function presents a menu-based interface to interact with the system. The user can:

Press 1 to add student details.

Press 2 to display all student details.

Press 3 to remove a student.

Press 4 to search for a student.

Press 0 to exit the program.

It continuously prompts for input until the user chooses to exit.

Usage Example

---------- Student Management System ----------
Press 1 to Add Student Details.
Press 2 to Display All Student Details.
Press 3 to Remove Student Details.
Press 4 to Search for a Student.
Press 0 to Exit.
Enter your choice: 1

Enter the number of students: 2
Enter the Student ID: 101
Enter the Student Name: Alice
Enter the Student ID: 102
Enter the Student Name: Bob

Improvements & Future Enhancements

Implement file storage to save student records persistently.

Allow user-defined data types using template specialization.

Improve user interface with better formatting.

This documentation provides an overview of the Student Management System, its functionality, and its implementation details.
