/*
! Print the pattern in the function given to you.
*****
*   *
*   *
*   *
*****
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Count : ";
    cin>>n;
    
    // 
    ? For 2 cross 2 it works well
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<"*";
        }
        cout<<endl;
    }*/
/*    
for (int i = 1; i <= n; i++)
{
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == (n - i) + 1 && j == (n - j) + 1)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

return 0;
}
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of count : ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i == n || j == n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}