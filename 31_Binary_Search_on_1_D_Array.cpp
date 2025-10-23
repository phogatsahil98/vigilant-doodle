/*
#include <iostream>
using namespace std;

int binarySearch(int *arr, int searchNumber, int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == searchNumber)
        {
            return mid; // found
        }
        else if (searchNumber < arr[mid])
        {
            high = mid - 1; // search in left half
        }
        else
        {
            low = mid + 1; // search in right half
        }
    }

    return -1; // not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int searchNumber;

    cout << "Enter a number to search: ";
    cin >> searchNumber;

    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, searchNumber, size);

    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found in array." << endl;

    return 0;
}
*/
// Using Recursive call
/*
#include <iostream>
using namespace std;

int recursiveSearch(int *arr, int low, int high, int searchElement)
{
    // Base condition
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    // Check mid element
    if (arr[mid] == searchElement)
        return mid;

    // If element is smaller, search left half
    else if (searchElement < arr[mid])
        return recursiveSearch(arr, low, mid - 1, searchElement);

    // Else search right half
    else
        return recursiveSearch(arr, mid + 1, high, searchElement);
}

int main()
{
    int arr[] = {0, 4, 23, 35, 36, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int searchElement;
    cout << "Enter a Number to Find out its Index: ";
    cin >> searchElement;

    int elementFound = recursiveSearch(arr, 0, size - 1, searchElement);

    if (elementFound != -1)
        cout << "Element Found at Index: " << elementFound;
    else
        cout << "Element Not Exist";

    return 0;
}
*/
// Implementing Recursive Once again
/*
#include<iostream>
using namespace std;
int recursiveSearch(int *arr, int low_ , int high_ , int searchElement){
    int low = low_;
    int high = high_;

    int mid = low + (high - low) / 2;

    // Initial Condition
    if (low > high)
    {
        return -1;
    }
    // if element is mid
    else if(arr[mid] == searchElement){
        return mid;
    }
    else if (searchElement < arr[mid]){
        return recursiveSearch(arr, low , mid-1 , searchElement);
    }
    else //(searchElement > arr[mid])
    {
        return recursiveSearch(arr, mid+1 , high ,searchElement);
    }
}

int main(){
    int arr[] = {12, 24, 34, 47, 56, 69, 78, 82, 90};

    int searchElement;
    cout<<"Enter an Element to Search : ";
    cin>>searchElement;

    int size = sizeof(arr)/sizeof(arr[0]);
    int high = size - 1;

    int searchValue = recursiveSearch(arr , 0 , high , searchElement);

    if(searchValue != -1){
        cout<<"Element found at index : "<<searchValue<<endl;
        // If you want to show 1-based position, uncomment the next line:
        // cout<<"Element Found at position (1-based): "<<searchValue + 1<<endl;
    }
    else{
        cout<<"Element does not exist";
    }
}

//! Implementing Lower Bound Algorithm
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 8, 15, 19};
    int target = 9;

    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    int ans = size; // default if no element >= target

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target)
        {
            ans = mid;      // possible answer
            high = mid - 1; // search left for smaller valid index
        }
        else
        {
            low = mid + 1; // search right
        }
    }

    if (ans == size)
        cout << "No element greater than or equal to target found.";
    else
        cout << "Lower Bound Index is : " << ans << " (Value: " << arr[ans] << ")";

    return 0;
}
*/
//! Implementing Upper bound
/*
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 3, 7, 10, 11, 11, 25};
    int target = 10;

    int low = 0;
    int size = sizeof(arr)/ sizeof(arr[0]);
    int high = size - 1;

    int ans = size;
    while (low <= high)
    {
        int mid = low + (high - low)/ 2;
        // maan lia arr[mid] > target so chances h ki yeh bda ho toh hum isse chhote ko search krenge toh hum high ko mid - 1 kr denge
        if(arr[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(ans != size){
        cout<<"Upper Bound found at Index "<<ans;
    }
    else{
        cout<<"No Upper Bound Exist";
    }
    return 0;
}
*/
//! Search Insert Position
/*
#include<iostream>
using namespace std;
int main(){
    // int arr1[] = {1, 2, 4, 7};
    int arr1[] = {1, 2, 4, 7};
    int target1 = 8;
    int size1 = sizeof(arr1)/ sizeof(arr1[0]);

    int low = 0;
    int high = size1 - 1;

    int ans1 = size1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr1[mid] ==  target1){
            cout<<"Element exist at "<<mid;
            return mid;
        }
        else if (arr1[mid] >= target1){
            ans1 = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<"The Correct Position to fill is : "<<ans1;
    return 0;
}
*/



