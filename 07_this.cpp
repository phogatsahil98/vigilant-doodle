#include<iostream>
using namespace std;

// Using this to reference the instance of Class 
/*
class Sum{
    int a, b;
    public :
        void setSum(int a, int b){
            this->a = a;
            this ->b = b;
        }

        int getSum(){
            cout<<"The Sum is : "<<a+b;
        }
};

int main(){
    Sum s;
    s.setSum(12,13);
    s.getSum();
}
*/

// Using this to reference the object of a class variable 

class Sum{
    int a,b;

    public :
        Sum & setSum(int a , int b){
            this->a = a;
            this->b = b;
            return *this;
        }

        void getSum(){
            cout<<"The Sum is : "<<a+b;
        }
};

int main(){
    Sum s;
    s.setSum(12,13).getSum();
}