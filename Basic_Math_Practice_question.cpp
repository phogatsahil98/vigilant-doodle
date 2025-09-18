/*
!Basic – Given a positive integer N, find and print the number of digits in N using the logarithmic method.
Input: 12345
Output: 5
*/
/*
? Solved :
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    int total_number = static_cast<int>(log10(number)+1);
    *This line calculates the number of digits in a positive integer number using logarithm.

    cout<<total_number;

    return 0;
}
*/
/*
! Trailing Zeros Test – Check how your algorithm handles numbers ending with zeros.
Input: 100000
Output: 6
*/
/*
? Solved :
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number : ";
    cin>>N;

    int last_digit = static_cast<int>(log10(N)+1);

    cout<<last_digit;
    return 0;
}
*/
/*
! Large Number – Count the number of digits in a number greater than 10⁹ without looping.
Input: 9876543210
Output: 10
*/
/*
? Solved :
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter a number : ";
    cin>>N;

    int find_last_digit = static_cast<int>(log10(N)+1);

    if(find_last_digit >= 10){
        cout<<find_last_digit;
    }
    else{
        cout<<"Not a Power of 10 ^ 9.";
    }

    return 0;
}
*/
/*
! Edge Case – If N = 1 or N = 9, does your formula give the correct answer? Test and verify.
*/
/*
? Verified for 1 and 9
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter a number : ";
    cin>>N;

    int total_digit = static_cast<int>(log10(N)+1);

    cout<<total_digit;
}
*/
/*
! Multi-Test Case – Write a program that takes multiple inputs and outputs the digit count for each one.
Input:
3
7
100
9999

Output:
1
3
4
*/
/*
                            * Wrong

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int total_input;

    vector <int> v(total_input);

    cout<<"Enter inputs you want to give : ";
    cin>>total_input;

    while(total_input != 0){
        v.push_back();
    }

    vector <int> count;

    count.push_back() = static_cast<int>(log10(v)+1);

    for(auto show : cout){
        cout<<show<<endl;
    }
    return 0;
}
*/
// * correct Version
/*
? correct
#include<vector>
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int total_input;
    cout<<"Enter the Number you want to take input : ";
    cin>>total_input;

    vector<int>v;
    v.reserve(total_input);
    // For taking Input
    for(int i = 1; i <= total_input; i++){
        int number;
        cout<<"Enter "<<i<<" Number : ";
        cin>>number;
        v.push_back(number);
    }
    // For Calculation
    vector<int> record;
    for(int c : v){
        int calc;
        calc = static_cast<int>(log10(c)+1);
        record.push_back(calc);
    }
    // TO print on console
    for(auto print : record){
        cout<<print;
    }

}
*/
/*
! Constraint Challenge – The input number can be up to 10¹⁸. Write code that works correctly without integer overflow.
*/
/*
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    double long number;
    cout<<"Enter Number : ";
    cin>>number;

    int countdigit = static_cast<double long>(log10(number)+1);

    cout<<countdigit;
    return 0;
}
*/
// ? If a number is palindrome or not
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check Palindrome : ";
    cin>>n;

    int rev = 0;
    int dup = n;
    while(n > 0){
        int temp = n % 10;
        rev = (rev * 10) + temp;
        cout<<"Rev : "<<rev<<endl;
        n = n / 10;
        cout<<"Number N : "<<n<<endl;;
    }
    if(rev == dup){
        cout<<"Number is Palindrome ";
    }
    else{
        cout<<"Number is not a Palindrome ";
    }
    return 0;
}
*/
// ? Armstrong number
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter a Number : ";
    cin>>N;

    int sum = 0;
    int dup = N;

    do
    {
        int lastdigit = N % 10;
        // cout<<"Lastdigit : "<<lastdigit<<endl;
        sum += (lastdigit*lastdigit*lastdigit);
        // cout<<"Sum : "<<sum<<endl;
        N = N / 10;
    }while(N > 0);

    if (dup == sum)
    {
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is not an Armstrong";
    }
    return 0;
}
?                                             ^
?        Correct and work for every instances | above is incorrect 
class Solution {
    public:
        bool isArmstrong(int n) {
            int original = n;
            int sum = 0;

            // count number of digits
            int k = to_string(n).size();

            while(n > 0){
                int lastdigit = n % 10;
                sum += pow(lastdigit, k);
                n = n / 10;
            }

            return (sum == original);
        }
    };

*/
// GCD & HCF
/*
#include<iostream>
using namespace std;

int main(){
    int n1 , n2;
    cout<<"Enter Value of 1st HCF : ";
    cin>>n1;

    cout << "Enter Value of 2nd HCF : ";
    cin>>n2;

    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }

    if(n1 == 0) cout<<n2;
    else cout<<n1;

    return 0;
}
*/
// Repeating Armstrong Number
/*
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number to check if number is Armstrong or not : ";
    cin>>num;

    int dup = num;

    int total_digit = static_cast<int>(log10(num)+1);

    int arm = 0;
    while (num > 0)
    {
        int lastdigit  = num % 10;
        cout<<"lastdigit :"<<lastdigit<<endl;
        arm = arm + pow(lastdigit, total_digit);
        cout<<"arm : "<<arm<<endl;
        num = num / 10;
        cout<<"num :"<<num<<endl;
    }

    cout<<"final arm : "<<arm<<endl;
    if (arm == dup) cout<<"Number is armstrong";
    else cout<<"Number is not an armstrong";

    return 0;
}
*/
/*
// TODO: To check all divisors
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int num; cout<<"Enter a number to check its all divisors :";
    cin>>num;

    vector<int> v;

    for(int i = 1; i*i <= num; i++){
        if(num % i == 0){
            v.push_back(i);
            if(i != num/i){
                v.push_back(num/i);
            }
        }
    }

    sort(v.begin(), v.end());
    // Printing all divisors
    cout<<"Divisors are : ";
    for(auto j : v){
        cout<<j<<" ";
    }
    return 0;
}
*/
