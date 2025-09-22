/*
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> arr{2, 1, 2, 3, 1, 4, 5};

    unordered_set<int> hash_arr;

    // Insert elements into hash set (automatically removes duplicates)
    for (auto iter : arr)
    {
        hash_arr.insert(iter);
    }

    // Copy elements back to vector
    vector<int> uniqueArr;
    for (auto iter : hash_arr)
    {
        uniqueArr.push_back(iter);
    }

    // Print result
    cout << "Unique elements: ";
    for (int i = 0; i < uniqueArr.size(); i++)
    {
        cout << uniqueArr[i] << " ";
    }
    return 0;
}
*/
//! My implementation
/*
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){

    vector<int> arr{1 ,2, 3, 1, 2, 1, 1, 2, 2, 3, 3};

    unordered_set<int> urr;
    // Pushing Inside Unordered Set
    for(auto iter : arr){
        urr.insert(iter);
    }
    // Pushing inside new Vector
    vector<int> newvector;
    // Pushing inside it
    for(auto iter_1 : urr){
        newvector.push_back(iter_1);
    }
    // Printing Whole Vector
    // Vector with No Repeatation
    cout<<"Vector With Unique Value : ";
    for(auto iter_2 : newvector){
        cout<<iter_2<<" ";
    }

    return 0;
}
*/
//! Implementing Optimal Approach
/*
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    if (arr.size() == 0)
        return 0;

    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; // size of unique elements
}

int main()
{
    vector<int> arr = {3, 4, 4, 5, 6 ,6 ,7 ,7 ,8};

    int newSize = removeDuplicates(arr);

    cout << "Unique elements size: " << newSize << endl;
    cout << "Unique elements are: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
? Will only run when the array is sorted
    return 0;
}
*/
// Ab Algorithm aaya smjh iska dry run kuch is trh h
/*
    {3, 4, 4, 5, 6 ,6 ,7 ,7 ,8}
    if ( arr[i] != arr[j]){
    i++;
    arr[i] = arr[j]
    }
    yha arr[i] hai aur arr[j] hai
    jab arr[0] == arr[1] toh skip aur j = 1
    jab arr[0] != arr[2] toh i ko +1 kr do and arr[i] k andar arr[j] ki value daal do 
*/
//? Starting with our task
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> uniqueValue (vector<int> &v){
    int i = 0;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[i] != v[j]){
            i++;
            v[i] = v[j];
        }
    }
    v.resize(i + 1);
    return v;
}

int main(){
    vector<int> v{1, 1, 1, 2, 2, 3, 3, 3};

    vector<int> sorted = uniqueValue(v);

    cout<<"Unique Values of Vectors are : ";
    for(auto iter : sorted){
        cout<<iter<<" ";
    }
}
*/
//! Two Pointer
// 1, 1, 2, 2, 3, 3, 4
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{1 ,1, 2, 2, 2, 3, 3, 4};

    // yha logic implement kro ki kaise yhh 2 elements ko skip krega
    int i = 2;
    for(int j = 2; j < nums.size() ; j++){
        if (nums[j] != nums[i-2])
        {
            nums[i] = nums[j];
            i++;
        }
    }

    // Printing the Value
    for(auto iter : nums){
        cout<<iter<<" ";
    }

    return 0;
}
*/
// Rotate left by one place By //? 1st Method -> By storing 1st element in temp
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{1, 2, 3, 4, 5};

    int temp = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;

    cout<<"After 1 Left Rotation : ";
    for(auto iter : nums){
        cout<<iter<<" ";
    }

    return 0;
}
*/
//!Rotating Array by Kth index
/*
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int rotate;
    cout << "Enter the value to rotate by: ";
    cin >> rotate;

    // Handle cases where rotate > size
    rotate = rotate % size;

    // Step 1: Temp array to hold first 'rotate' elements
    int temp[100]; // assume size max 100
    for (int i = 0; i < rotate; i++)
    {
        temp[i] = arr[i];
    }

    // Step 2: Shift the rest of the elements left
    for (int i = rotate; i < size; i++)
    {
        arr[i - rotate] = arr[i];
    }

    // Step 3: Put back temp elements at the end
    for (int i = 0; i < rotate; i++)
    {
        arr[size - rotate + i] = temp[i];
    }

    // Print final array
    cout << "Array after rotation: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//! Implementing above with function
#include <iostream>
using namespace std;

void rotateFunction(int arr[], int size, int rotate)
{
    // Temporary array to store rotated part
    int temp[100];

    // Step 1: Copy first 'rotate' elements into temp
    for (int i = 0; i < rotate; i++)
    {
        temp[i] = arr[i];
    }

    // Step 2: Shift the remaining elements to the left
    for (int i = rotate; i < size; i++)
    {
        arr[i - rotate] = arr[i];
    }

    // Step 3: Put temp elements at the end
    for (int i = 0; i < rotate; i++)
    {
        arr[size - rotate + i] = temp[i];
    }

    // Print rotated array
    cout << "Rotated Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int rotate;
    cout << "Enter a Value to Rotate by: ";
    cin >> rotate;

    // Handle cases where rotate > size
    rotate = rotate % size;

    rotateFunction(arr, size, rotate);

    return 0;
}
