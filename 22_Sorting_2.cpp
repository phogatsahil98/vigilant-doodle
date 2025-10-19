// ! Merge Sort
/*
#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Compare and merge
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted data back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);      // left half
    mergeSort(arr, mid + 1, high); // right half
    mergeArray(arr, low, mid, high); // merge
}

int main() {
    int count;
    cout << "Enter number of elements: ";
    cin >> count;

    vector<int> arr(count);
    cout << "Enter elements: ";
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, count - 1);

    cout << "Sorted Array: ";
    for (auto it : arr) {
        cout << it << " ";
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
    cout<<"Enter your count :";
    cin>>count;

    // Ab ek vector array banao
    vector<int> arr(count);
    // ek Array banao count ko insert krne k liye
    for(int i = 0 ; i < count ; i++){
        cin>>arr[i];
    }

    // Ab Merge Sort ka function likh deta hu
    
    * Pahle yh dekhte h ki Merge Sort mein krte kya h -> toh yhh bulbalo ki trh hota h apne adjacent bulbule ko neeche chhod k uppar aa jata h waise hi isme b hum adjacent bulbule ko compare krenege

// Merge Sort
for (int i = 0; i < count; i++)
{
    for (int j = 0; j < count - i - 1; j++)
    {
        if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
    }
}

// Printing Sorted Array
cout << "Sorted Array : ";
for (auto iter : arr)
{
    cout << iter << " ";
}

return 0;
}

*/
// ! It's time for Recursive Bubble Sort
/*
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    // Base case
    if (n == 1)
        return;

    // Ek pass: sabse bada element last mein
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call: last element fix ho gaya, ab n-1 size ke liye sort karo
    bubbleSort(arr, n - 1);
}

int main()
{
    int count;
    cout << "Enter value of count: ";
    cin >> count;

    vector<int> arr(count);

    cout << "Enter array elements: ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, count);

    cout << "Sorted Array: ";
    for (auto iter : arr)
    {
        cout << iter << " ";
    }

    return 0;
}
*/
// ! Basic Insertion Sort
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    cout<<"Enter the Value of count :";
    cin>>count;
    // Defining vector Array for dynamic size
    vector<int> arr(count);

    // Taking input from user
    for(int i = 0 ; i < count ; i++){
        cin>>arr[i];
    }

    // Implementing Insertion Sort
    for (int i = 1; i < count; i++)
    {
        int j = i;

        * Using while loop so that until the condition matches and data member does not reaches to its correct position we will decrement it

        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    // Printing Sorted Array
    cout<<"After Sorting : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
// ! Recursive Insertion Sort
// ? Not a Correct Method as it involves Double Sorting first one is with Loop and then Recursive function call
/*
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> & arr ,int size){

    if (size == 1){
        return ;
    }

    // Phle Recursion karo
    insertionSort(arr , size - 1);

    // Ab nth element ko uski sahi jgh le aao
    int last = arr[size - 1];
    int j = size - 2;

    // Shift elements right side tak jab tak correct position na mile
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main(){
    int count;
    cout<<"Enter number of digits : ";
    cin>>count;

    // Creating an array of dynamic size
    vector<int>arr(count);

    // Taking input from user
    for(int i = 0; i < count ; i++){
        cin>>arr[i];
    }

    // Calling Insertion function
    insertionSort(arr , count);

    // Taking Output 
    cout<<"Sorted array is : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
// With Correct implementation 
// ! Correct Insertion sort implementation
/*
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr , int size){

    // Base Case
    if (size <= 1){
        return;
    }

    // Implementing Insertion Sort
    insertionSort(arr, size - 1);

    // Step 2: Last element ko uthao
    int last = arr[size - 1];
    int j = size - 2;

    // Step 3: Shift elements to right until correct position found
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    // Step 4: Last element ko correct jagah pe daal do
    arr[j + 1] = last;
};

int main(){
    int count;
    cout<<"Enter count : ";
    cin>>count;

    // Initializing an vector array
    cout<<"Enter Array : "<<endl;
    vector<int>arr(count);

    // Taking input from user
    for(int i = 0 ; i < count ; i++){
        cin>>arr[i];
    }

    // InsertionSort function
    insertionSort(arr , count);

    // Displaying Sorted Array
    cout<<"Sorted Array : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
// ?Reimplementing Recursive Insertion Sort
/*
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int size)
{
    // Base case of Recursion
    if (size == 1)
    {
        return;
    }

    // Implementing Recursive function
    insertionSort(arr, size - 1);

    // Implementing Cases:
    int last = arr[size - 1]; // Storing the value of last index
    int j = size - 2;         // starting from size-2 so that comparison would be between arr[j+1] and arr[j]

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    // Ab last mein stored element ko uske sathaan prr daalna h
    arr[j + 1] = last;
}

int main()
{
    // Taking the count
    int count;
    cout << "Enter Value of Count : ";
    cin >> count;

    // Declaring Vector Array
    vector<int> arr(count);

    // Taking input from user and storing it into vector array
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    // Declaring function defination
    insertionSort(arr, count);

    // Printing it on the screen
    cout << "Sorted Array : ";
    for (auto iter : arr)
    {
        cout << iter << " ";
    }

    return 0;
}
*/
