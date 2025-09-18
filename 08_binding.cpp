#include<iostream>
using namespace std;

/*
class binding {
private:
    int a, b;

public:
    //*? Constructor using initializer list (corrected)
    binding(int i, int j) : a(i), b(j) {}

    //*? Destructor
    ~binding() {
        cout << "The Value of a is: " << a << endl;
        cout << "The Value of b is: " << b << endl;
    }
};

int main() {
    binding bd(1, 2);  // TODO: Object creation
    return 0;
}
*/

/* Working of Binding Function */
class binding{
    private:
        int a;

    public:
        void getData(int a){
            this->a = a;
        }

        void putData(){
            cout<<"The Value of a is : "<<a;
        }
};

class Derived : public binding{
    public:
        int a = 12;
        void putData(){
            cout<<"The Value of a is : "<<a<<endl;
        }
};

int main(){
    binding* pointerBase;
    Derived derived_object;
    binding object_;
    pointerBase = & derived_object;
    pointerBase->getData(10);
    pointerBase->putData();
}