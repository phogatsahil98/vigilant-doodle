//! To find out Largest element in an array
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{9, 87, 6, 56, 7};

    sort(arr.begin(), arr.end());

    // Printing whole array
    // for(auto iter : arr){
    //     cout<<iter<<" ";
    // }
    
    //! Printing Largest Number 
    int size = arr.size();
    cout << arr[size-1];

    return 0;
}
*/
//! Optimization of above code 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{6, 5, 4, 9, 8, 7, 6, 4, 5, 6};

    int maxElement = 1;

    for (int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    
    cout<<"Maximum Element : "<<maxElement;
    return 0;
}