#include<iostream>
using namespace std;

///@brief 1️⃣ Single Inheritance
class Person {
public:
    void displayPerson() {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person {
public:
    void displayStudent() {
        cout << "I am a Student." << endl;
    }
};

///@brief 2️⃣ Multilevel Inheritance
class ResearchStudent : public Student {
public:
    void displayResearch() {
        cout << "I am a Research Student." << endl;
    }
};

///@brief 3️⃣ Multiple Inheritance
class Employee {
public:
    void displayEmployee() {
        cout << "I am an Employee." << endl;
    }
};

class PartTimeStudent : public Student, public Employee {
public:
    void displayPartTime() {
        cout << "I am a Part-time Student." << endl;
    }
};

/// @brief 4️⃣ Hierarchical Inheritance
class Teacher : public Person {
public:
    void displayTeacher() {
        cout << "I am a Teacher." << endl;
    }
};

/// @brief  5️⃣ Hybrid Inheritance
// Person -> Student -> AcademicRecord
// Person -> Teacher

class AcademicRecord : public Student {
public:
    void displayRecord() {
        cout << "I have an Academic Record." << endl;
    }
};

int main() {
    cout << "\n--- Single Inheritance ---\n";
    Student s;
    s.displayPerson();  // From Person
    s.displayStudent(); // From Student

    cout << "\n--- Multilevel Inheritance ---\n";
    ResearchStudent r;
    r.displayPerson();     // From Person
    r.displayStudent();    // From Student
    r.displayResearch();   // From ResearchStudent

    cout << "\n--- Multiple Inheritance ---\n";
    PartTimeStudent p;
    p.displayStudent();    // From Student
    p.displayEmployee();   // From Employee
    p.displayPartTime();   // Own

    cout << "\n--- Hierarchical Inheritance ---\n";
    Teacher t;
    t.displayPerson();     // From Person
    t.displayTeacher();    // From Teacher

    cout << "\n--- Hybrid Inheritance ---\n";
    AcademicRecord a;
    a.displayPerson();     // From Person
    a.displayStudent();    // From Student
    a.displayRecord();     // From AcademicRecord

    return 0;
}
