/*
* ✅ What is a class template?

A **class template** lets you define a class **once**, but use it for *any* data type.
So instead of rewriting the same class for `int`, `float`, `double`, etc., you write one template.

---

* ✅ Simple Example: `Calculator` Class Template

Let’s build a generic calculator class that works for **any type** (int, float, double, etc.)
*/

#include <iostream>
using namespace std;

// * Template declaration
template <class T>
class Calculator {
private:
    T num1;
    T num2;

public:
    // * Constructor
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    // * Addition
    T add() {
        return num1 + num2;
    }

    // * Subtraction
    T subtract() {
        return num1 - num2;
    }

    // * Multiplication
    T multiply() {
        return num1 * num2;
    }

    // * Division
    T divide() {
        // check for zero division
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!\n";
            return 0;
        }
    }
};

int main() {
    //  Using Calculator with int
    Calculator<int> calcInt(10, 5);
    cout << "Integer Addition: " << calcInt.add() << endl;
    cout << "Integer Division: " << calcInt.divide() << endl;

    // Using Calculator with double
    Calculator<double> calcDouble(5.5, 2.2);
    cout << "Double Multiplication: " << calcDouble.multiply() << endl;
    cout << "Double Subtraction: " << calcDouble.subtract() << endl;

    return 0;
}


//* 📝 Explanation (line by line):

/*
? `template <class T>`
– defines a **template class** with type placeholder `T`
– you can later replace `T` with `int`, `float`, `double`, etc.

? `Calculator<T>`
– means you can create a calculator for **any** data type

? `Calculator<int> calcInt(10,5);`
– creates an integer calculator

? `Calculator<double> calcDouble(5.5, 2.2);`
– creates a double calculator

? `add()`, `subtract()`, etc.
– these member functions work with whatever type `T` you choose

---

! ✅ Output

```
Integer Addition: 15
Integer Division: 2
Double Multiplication: 12.1
Double Subtraction: 3.3
```

---

**Class templates** are super useful for:

* writing generic stacks
* queues
* linked lists
* data structures
* and even in STL (like `vector<int>`, `vector<string>`)

*/