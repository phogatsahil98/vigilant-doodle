// ! Selection Sort
/*
#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter number of count : ";
    cin>>count;

    int arr[count];

    // Taking input
    for(int i = 0; i < count; i++){
        cin>>arr[i];
    }

    * Sorting
    for(int i = 0 ; i < count-1 ; i++){
        // Assume minimum jo hai vo ith index pr h
        int minimum = i;
        // iterate karo aur compare krke dekho ki kya pta vo ith index pr na ho toh
        for(int j = i+1 ; j < count ; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
    }

    // Prinitng Computed data
    cout<<"Sorted data : ";
    for(int k = 0; k < count ; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
*/
// ! Bubble Sort
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    cout<<"Enter total number of count : ";
    cin>>count;
    vector<int> arr(count);

    // taking input
    for(int i = 0; i <count ; i++){
        cin>>arr[i];
    }

    * Implementing bubble sort
    for(int i = 0; i < count; i++){
        for(int j  = 0; j < count - i - 1; j++){
            // Compare
            if (arr[j] > arr[j+1])
            swap(arr[j], arr[j + 1]);
        }
    }

    // Printing Sorted
    cout<<"Sorted Array : ";
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}
*/
// ! Insertion Sort
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    cout<<"Enter number of Count : ";
    cin>>count;

    vector<int> arr(count);
    // Taking input
    for(int i = 0 ; i <count; i++){
        cin>>arr[i];
    }

    * Insertion Sort
    for(int i = 1; i < count ; i++){
        int j = i;
        while( j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    // Printing Sorted Array
    cout<<"Sorted Array : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
