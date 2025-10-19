/*
#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the number of count : ";
    cin >> count;

    int odd = 1;  // first odd number
    int even = 2; // first even number

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << odd << " " << even << " ";
            odd += 2;  // next odd
            even += 2; // next even
        }
        cout << endl; // new line after each row
    }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter count : ";
    cin>>count;

    for(int i = 1; i <= count; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter count : ";
    cin>>n;

    for(int i = n; i >= 1; i--){
        * For Stars
        for(int j = n; j > n-i; j--){
            cout<<"*";
        }
        * For Spaces
        for (int k = 1; k <= n - i; k++)
        {
            cout<<" ";
        }
        * For Stars
        for(int l = 1; l <= n - i; l++){
            cout<<" ";
        }
        * For Stars
        for (int j = n; j > n - i; j--)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for(int i_2 = 1; i_2 <= n; i_2++){
        * For Stars
        for (int j_2 = 1; j_2 <= i_2; j_2++)
        {
            cout << "*";
        }
        * For spaces
        for (int k_2 = n - i_2; k_2 >= 1; k_2--)
        {
            cout<<" ";
        }
        * For Space
        for(int l_2 = n; l_2 > i_2; l_2--){
            cout<<" ";
        }
        * For Stars
        for (int j_2 = 1; j_2 <= i_2; j_2++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of count : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {   
        // * Stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        // * For Spaces
        for(int k = n; k > i; k--){
            cout<<" ";
        }
        // For spaces
        for (int j_2 = n; j_2 > i; j_2--)
        {
            cout << " ";
        }
        // For Stars
        for (int k_2 = 1; k_2 <=i; k_2++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for (int i = 1; i < n; i++){
        // * For Inverted Stars
        for (int l = n-1; l >= i; l--)
        {
            cout << "*";
        }
        // * For Inverted Spaces
        for(int m = 1; m <= i; m++){
            cout<<" ";
        }
        // for inverted space
        for(int l_2 = 1; l_2 <= i; l_2++){
            cout<<" ";
        }
        // for inverted stars
        for(int m_2 = n; m_2 > i; m_2--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}