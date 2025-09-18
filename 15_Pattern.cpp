/*#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter the Count : ";
    cin>>count;
    for (int i = 1; i <= count; i++)
    {
        for (int u = 1; u <= count-i; u++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= (2*i - 1); j++)
        {
            cout<<"*";
        }
        for (int v = 1; v <= count-i; v++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
1

0 1

1 0 1

0 1 0 1

1 0 1 0 1


? Print the pattern in the function given to you.
*/
// ! Wrong approach for above Pattern
/*
#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter the number of count : ";
    cin>>count;

    int odd = (count % 2) != 0 ;
    cout<<"odd value : "<<odd <<endl;
    int even = (count % 2) == 0;
    cout<<"Even value : "<<even<<endl;

    if(odd){
        for (int i = 1; i <= count; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << odd << " ";
            }
        }
    }
    else{
        for (int i = 1; i <= count; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << odd << " " << even;
            }
        }

    }
}
*/
// ! Correct approach :
/*
#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the number of count : ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // cout << ((i + j) % 2) << " "; // yahan se pattern decide hoga
            cout << ((i + j + 1) % 2) << " ";
        }
        cout << endl; // har row ke baad new line
    }
}
*/
/*
TODO : To Print Below Pattern 
1        1
12      21
123    321
1234  4321
1234554321
*/
/*
    ! Code :
#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter count : ";
    cin >> count;

    for (int i = 0; i <= count; i++)
    {
         * To print Value till i
        for(int j = 1; j <= i; j++){
            cout<<j;
        }

         * To print spaces
        for(int s = count - i; s >= 1; s--){
            cout<<" ";
        }

         * again to print spaces
        for (int s = count - i; s >= 1; s--)
        {
            cout << " ";
        }

         * To print numbers :
        for(int n = i ; n >= 1; n--){
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}
    ? Achieved
*/
/*
TODO : Print the pattern in the function given to you.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
// ! Code : 
/*
#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter Count : ";
    cin>>count;

    int num = 1;
    for(int i = 1; i <= count ; i++){
        for(int j = 1; j <= i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
TODO: Print the pattern in the function given to you.
A
AB
ABC
ABCD
ABCDE
*/
// ! Code :
/*#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter count : ";
    cin>>count;

    int num = 64;
    // cout<<num<<endl;
    char ch = (char)num;
    // cout<<ch<<endl;

    for (int i = 1; i <= count; i++)
    {
        for(int j = 1 ; j <= i; j++){
            cout<<char(j+num)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter count : ";
    cin >> count;

    int base = 64; // ASCII before 'A'

    for (int i = count; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(base + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
/*
TODO : Print the pattern in the function given to you.
A
BB
CCC
DDDD
EEEEE
*/
/*
#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter number of Count : ";
    cin>>count;

    int num = 64;
    char ch = char(64);

    for(int i = 1; i <= count; i++){
        for(int j = 1; j <= i; j++){
            cout << char(ch + i) << " ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
TODO : Print the pattern in the function given to you.
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of count :";
    cin>>n;

    int num = 64;
    char ch = char(num);

    {
        int num = 64;
        char ch = char(num);

        for (int i = 1; i <= n; i++)
        {
            // For spaces
            for (int space = n-i; space >=1; space--)
            {
                cout << " ";
            }
            // For Ascending
            for (int k = 1; k <= i; k++)
            {
                cout << char(ch + k);
            }
            // For descending
            for (int j = i; j >= 2; j--)
            {
                cout << char(ch + (j - 1));
            }
            cout << endl;
        }
        return 0;
    }
}
*/
/*
! Print the pattern in the function given to you.
E
D E
C D E
B C D E
A B C D E
*/
#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter count : ";
    cin>>n;

    int num = 65;
    char ch = char(num);

    for (int i = n; i >= 1; i--)
    {
        //  for printing character 
        for(int j = i ; j <= n; j++){
            cout<<char(ch + (j -1))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
! Enter count : 5
    A
    BA
    CBA
    DCBA
    EDCBA

    int num = 65 + n;
    char ch = char(num);
    for(int i = n; i >= 1; i--){
        ? printing alphabets in right angled triangle starting from nth term till 1
        for(int j = i; j <= n; j++){
            cout<<char(ch-j);
        }
        cout<<endl;
    }
*/