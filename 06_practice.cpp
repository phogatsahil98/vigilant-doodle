#include <iostream>
#include <string>
using namespace std;

class Parent
{
    int age;
    string name;

public:
    Parent() {}
    Parent(int a, string s)
    {
        age = a;
        name = s;
    }

    void display();
};

void Parent ::display()
{
    cout << "Name is : " << name << endl;
    cout << "Age is : " << age << endl;
}

class Son : public Parent
{
    string Name;

public:
    Son(int a, string s) : Parent(a, s) {}
    void setName(string n);
    void displaySonName();
    void displayParentName();
};

void Son ::setName(string n)
{
    Name = n;
}

void Son ::displaySonName()
{
    cout << "Son Details are : ";
    cout << Name;
}

void Son ::displayParentName()
{
    cout << "Parent's Details are as Follow : " << endl;
    display();
}

int main()
{
    Son s(51, "Charan Singh");
    s.setName("Sahil Phogat");
    s.displayParentName();
    s.displaySonName();
    
    return 1;
}