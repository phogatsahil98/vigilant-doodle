/*
Create a class template named Pair that stores two values of the same type.

It should have a constructor to initialize both values.

Implement a member function getMax() that returns the maximum of the two values.

In main(), create one object for int and one for double, and print the results of getMax() for both.

? Basic Syntax

#include<iostream>
#include<string>
using namespace std;

template<typename T>

class Classname{
    *Class Body 
};

int main(){
    Classname<int> obj1;

    Classname<double> obj2;
}

*/
// -------------------***************************---------------------- 
//! Solution
/*
#include<iostream>
using namespace std;

template <class T>
class Pair {
public:
    T val1;
    T val2;

    Pair(T c1, T c2) : val1(c1), val2(c2) {}

    T getMax() {
        return (val1 > val2) ? val1 : val2;
    }
};

int main() {
    Pair<int> pair(2, 3);
    cout << "Max (int): " << pair.getMax() << endl;

    Pair<double> doublepair(3.33, 2.33);
    cout << "Max (double): " << doublepair.getMax() << endl;

    return 0;
}
*/

// ! Question 2
/* 
TODO: Create a class template called Container that takes two different data types, T1 and T2.

It should store two values: one of type T1, and the other of type T2.

Include a constructor to initialize both values.

Add a member function display() that prints both values on the same line.

In main(), create:

One object with int and char

One object with string and float

Use this to show how template with multiple types works.
*/
// ! Solution
#include<iostream>
#include<string>
using namespace std;

template< class T1, class T2>
class Container{
    T1 var1, var2;
    T2 var3, var4;

public:
    Container(T1 c1 , T1 c2 , T2 c3 , T2 c4)
        : var1(c1), var2(c2), var3(c3), var4(c4) {}

    void display(){
        cout << "T1 values: " << var1 << ", " << var2 << endl;
        cout << "T2 values: " << var3 << ", " << var4 << endl;
    }
};

int main(){
    Container<int , char> ic(1, 2, 'P', 'Q');
    ic.display();

    Container<string , float> sf("Phogat", "Sahil", 7.11f, 9.81f);
    sf.display();

    return 0;
}
