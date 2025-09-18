/*
QUESTION:
Write a C++ program to demonstrate the concept of "Array of Objects".
Create a class 'Student' with data members roll number, name, and marks.
Create an array of 3 Student objects, input their details, and display them.
Also find and display the student with the highest marks.

SUMMARY:
- Array of objects allows storing multiple objects of the same class in a single array
- Each element in the array is an object with its own set of data members
- We can access individual objects using array indexing
- Methods can be called on each object independently
- Useful for managing collections of similar entities

EXPECTED OUTPUT:
Enter details for 3 students:
Student 1:
Roll Number: 101
Name: Alice
Marks: 85

Student 2:
Roll Number: 102
Name: Bob
Marks: 92

Student 3:
Roll Number: 103
Name: Charlie
Marks: 78

Student Details:
Roll No: 101, Name: Alice, Marks: 85
Roll No: 102, Name: Bob, Marks: 92
Roll No: 103, Name: Charlie, Marks: 78

Student with highest marks:
Roll No: 102, Name: Bob, Marks: 92
*/
// ******************----------------------*******************
/*
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Method to set student data
    void setData(int roll, string n, float m) {
        rollNo = roll;
        name = n;
        marks = m;
    }

    // Method to get student data
    void getData() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }

    // Method to input student data
    void inputData() {
        cout << "Roll Number: ";
        cin >> rollNo;
        cout << "Name: ";
        cin >> name;
        cout << "Marks: ";
        cin >> marks;
        cout << endl;
    }

    // Method to get marks for comparison
    float getMarks() {
        return marks;
    }

    // Method to get roll number
    int getRollNo() {
        return rollNo;
    }

    // Method to get name
    string getName() {
        return name;
    }
};

int main() {
    const int SIZE = 3;
    Student students[SIZE];  // Array of Student objects

    cout << "Enter details for " << SIZE << " students:" << endl;

    // Input data for all students
    for(int i = 0; i < SIZE; i++) {
        cout << "Student " << (i + 1) << ":" << endl;
        students[i].inputData();
    }

    cout << "\nStudent Details:" << endl;

    // Display all student data
    for(int i = 0; i < SIZE; i++) {
        students[i].getData();
    }

    // Find student with highest marks
    int maxIndex = 0;
    for(int i = 1; i < SIZE; i++) {
        if(students[i].getMarks() > students[maxIndex].getMarks()) {
            maxIndex = i;
        }
    }

    cout << "\nStudent with highest marks:" << endl;
    students[maxIndex].getData();

    return 0;
}
*/
// ***************---------------------******************
/*
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        setId();
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        // fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
*/
// ******************--------------------***********************

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
