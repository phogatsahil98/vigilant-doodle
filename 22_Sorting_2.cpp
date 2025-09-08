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
