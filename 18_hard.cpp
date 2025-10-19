/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5


Print the pattern in the function given to you.


Examples:
Input: n = 4

Output:



Input: n = 2

Output:



Constraints:
1 <= n <= 100

Similar Problems

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter count : ";
    cin>>n;

    for(int i =1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if (i == i || j == i || i ==n || j==n)
            {
                cout<<i;
            }
            else{
                cout << 2 * (n - i);
            }
        }
        cout<<endl;
    }
    return 0;
}