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
