//! Selection Sort -> select minimum among all and swap with a[j]
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    cout<<"Enter number of count : ";
    cin>>count;

    vector<int> arr(count);
    // Taking input in array
    for(int i = 0; i <count; i++){
        cin>>arr[i];
    }

    // Sorting Selection sort
    for(int i = 0 ; i < count ;i++){
        int minimum = i;
        for(int j = i+1 ; j < count; j++){
            if(arr[j] < arr[minimum])
            swap(arr[j] , arr[minimum]);
        }
    }

    // Returning the sorted array
    cout<<"Sorted Array is : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
// ! Bubble Sort -> Sorting is done on the Basis of comparing adjacent element
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    cout<<"Enter Count : ";
    cin>>count;

    vector<int> arr(count);

    // Taking input
    for(int i = 0; i < count; i++){
        cin>>arr[i];
    }

    // Bubble Sort
    for(int i = 0 ; i < count ; i++){
        for(int j = 0 ; j < count -i - 1; j++){
            if (arr[j+1] < arr[j])
            swap(arr[j+1] , arr[j]);
        }
    }

    // Traversing array and printing it
    cout<<"After Sorting : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
// ! Insertion Sort -> Sorting is done on the basis of placing an element at its correct position
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    cout<<"Enter count : ";
    cin>>count;

    vector<int> arr(count);
    // Taking input
    for(int i = 0; i < count; i++){
        cin>>arr[i];
    }

    // Insertion Sort
    for(int i = 1 ; i < count ; i++){
        int j = i;
        while ( j > 0  && arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }

    // Printing Sorted array
    cout<<"Sorted Array is : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
