#include<iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Sahil", 20);     // student 1
    Student s2("Rohan", 21);     // student 2 (new data, same class structure)
    Student s3 = s1;             // student 3 (copy of s1)

    cout << "Student 1:\n";
    s1.show();

    cout << "Student 2:\n";
    s2.show();

    cout << "Student 3 (Copied from Student 1):\n";
    s3.show();

    return 0;
}
