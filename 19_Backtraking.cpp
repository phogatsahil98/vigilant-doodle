/*
? Suggested by ChatGPT
#include<iostream>
using namespace std;

void function(int num){
    cout << "Outer function: " << num << endl;
    if(num < 5){
        function(num + 1);
    }
}

int main(){
    int num = 1;
    function(num);
    return 0;
}
*/
/*
? Written by Me
#include<iostream>
using namespace std;

void function_(int a){
    if (a == 5)
    {
        exit(0);
    }
    else{
        cout << a << " ";
        a++;
        function_(a);
    }
};

int main(){
    int num = 1;
    function_(num);
    return 0;
}
*/
/*
 * Writing another time
#include<iostream>
using namespace std;

int inital = 1;

void printnumber(int num){
    if (inital > num){
        return;
    }
    else{
        cout<<inital<<" ";
        inital++;
        printnumber(num);
    }
};

int main(){
    int num;
    cout<<"Enter till you want to print number :";
    cin>>num;

    printnumber(num);
    
    return 0;
}
*/
/*
* Suggested by ChatGPT 
#include<iostream>
using namespace std;

void printnumber(int current, int num){
    if (current > num) return;
    cout << current << " ";
    printnumber(current + 1, num);
}

int main(){
    int num;
    cout<<"Enter till you want to print number: ";
    cin >> num;
    printnumber(1, num);
    return 0;
}
*/
/*
TODO: Print to 1 from N
#include<iostream>
using namespace std;

void printnumber(int a){
    if (a < 1){
        return;
    }
    else{
        cout<<a<<" ";
        a--;
        printnumber(a);
    }
};

int main(){
    int num;
    cout<<"Enter a NUmber :";
    cin>>num;

    printnumber(num);
}
*/
/*
#include <iostream>
using namespace std;

void printNumbers(int n)
{
    // Base case
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    // Recursive call
    printNumbers(n - 1);

    // Print current number
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}
*/
// ! Using backtracking
/*
#include<iostream>
using namespace std;

void backtrackingfunc(int num1 ,int num2){
    if ( num2 < num1 ){
        return;
    }
    else{
        backtrackingfunc(num1, num2 - 1);
    }
    cout<<num2<<" ";
};
int main(){
    int num;
    cout<<"Enter a NUmber : ";
    cin>>num;

    backtrackingfunc(1, num);
}
*/

// ! Without backtracking
/*
#include<iostream>
using namespace std;

void withoutbacktracking(int i, int num){
    if (i >= num){
        return;
    }
    else{
        cout<<i<<" ";
        i++;
    }

    withoutbacktracking(i , num);

};

int main(){
    int num;
    cout<<"Mahashya G number daalo :";
    cin>>num;

    withoutbacktracking(1, num);
}
*/
/*
#include<iostream>
using namespace std;

void withbacktracking(int i, int num){
    if (i == num){
        return;
    }
    else{
        withbacktracking(i+1, num);
    }
    cout<<i<<" ";
};

int main(){
    int num;
    cout<<"Mahasya G number daalo : ";
    cin>>num;

    withbacktracking(1 , num);

    return 0;
}
*/
//  ! Sum of N natural number 
/*
#include<iostream>
using namespace std;

int printSum(int n){
    int sum = 0;
    if(n == 0){
        return 0;
    }
    else{
        return n + printSum(n-1);
    }
};

int main(){
    int num;
    cout<<"Mahasya G Number daalo : ";
    cin>>num;

    cout<<printSum(num);
}
*/
/*
#include<iostream>
using namespace std;

int reversearray(int arr[], int start, int end){
    // Base Case
    if(start >= end){
        return 0;
    }
    else{
        swap(arr[start], arr[end]);
        return reversearray(arr, start + 1, end -1);
    }
};

int main(){
    int arr[] = {1 ,2 ,3 ,4 ,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    reversearray(arr, 0 , size-1);
    cout<<"Array After revresal : ";
    for(auto i : arr){
        cout<<i<<" ";
    }
}
*/
// ! Using 2 function
/*
#include<iostream>
using namespace std;

int helperfunc(int arr[], int start , int end){

    if(start >= end){
        return 0;
    }
    else{
        swap(arr[start], arr[end]);
    }
    return helperfunc(arr, start + 1, end - 1);
};

int revresearrayfunc(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    helperfunc(arr, start , end);
};

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(arr[0]);

    revresearrayfunc(arr, n);

    cout<<"Reversed Array is :";
    for(auto i : arr){
        cout<<i<<" ";
    }

    return 0;
} 
*/
// ! To check if the string is palindrome or not
/*
#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(int start, int end, string &val)
{
        if (val[start] == val[end])
        {
            return true;
        }
        else
        {
            return 0;
        }
        palindrome(start + 1 , end - 1 , val);
}

bool checkPalindrome(string & val)
{
    int start = 0;
    int end = val.length()-1;
    return palindrome(start, end, val);
};

int main()
{
    string value;
    cout << "Enter a String :";
    cin >> value;

    if(checkPalindrome(value) == 1){
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not a Palindrome";
    }

    return 0;
}
*/
// ! Fabonacci Serires
/*
#include<iostream>
using namespace std;

int fabonacci_number(int number){
    // agar number 1 hai toh
    if (number == 0 || number == 1){
        return number;
    }
    return fabonacci_number(number - 1) + fabonacci_number(number - 2);
};

int main(){
    int number;
    cout<<"Enter a number till you want to get fabonacci number :";
    cin>>number;

    cout<<fabonacci_number(number);

    return 0;
}
*/
