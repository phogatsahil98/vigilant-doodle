#include <iostream>
#include <cstring> // For strcpy

// Structure Definition
struct Student {
    int id;
    char name[50];
    float marks;
};

// Union Definition
union Data {
    int intValue;
    float floatValue;
};

// Enum Definition
enum Color { RED, GREEN, BLUE };

int main() {
    // Structure Example
    Student student;
    student.id = 101;
    strcpy(student.name, "Alice");
    student.marks = 95.5;

    std::cout << "Structure Example:" << std::endl;
    std::cout << "ID: " << student.id << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Marks: " << student.marks << std::endl;

    // Union Example
    Data data;
    data.intValue = 42;
    std::cout << "\nUnion Example (Integer):" << std::endl;
    std::cout << "Integer Value: " << data.intValue << std::endl;

    data.floatValue = 3.14; // Overwrites intValue
    std::cout << "Union Example (Float):" << std::endl;
    std::cout << "Float Value: " << data.floatValue << std::endl;

    // Enum Example
    Color color = RED;
    std::cout << "\nEnum Example:" << std::endl;
    std::cout << "RED: " << color << std::endl;

    color = GREEN;
    std::cout << "GREEN: " << color << std::endl;

    color = BLUE;
    std::cout << "BLUE: " << color << std::endl;

    return 0;
}
