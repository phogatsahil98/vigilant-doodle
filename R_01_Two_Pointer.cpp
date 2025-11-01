/*
! 🧠 1. Pair Sum in Sorted Array

Problem: Given a sorted array and a target, check if any two numbers add up to that target.
Example: arr = [1, 2, 4, 6, 8, 9], target = 10 → (2, 8) ✅

🧭 Approach Overview:
Use two pointers: left = 0, right = n - 1.
Calculate sum = arr[left] + arr[right].

If sum == target → Found ✅
If sum < target → left++
If sum > target → right--

Continue till left < right.
⏱️ Time: O(n)
*/
// TODO : Question 1 
/*
#include <iostream>
using namespace std;

void calculateSum(int* arr, int target, int left, int right) {
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
            return;  // Exit after finding the pair
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << "No pair found!" << endl;
}

int main() {
    int arr[] = {1, 2, 4, 5, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter Target : ";
    cin >> target;

    calculateSum(arr, target, 0, size - 1);

    return 0;
}
*/
/*
! 🧠 2. Remove Duplicates from Sorted Array

Problem: Remove duplicates in-place from a sorted array.
Example: [1,1,2,2,3,3,4] → [1,2,3,4]

🧭 Approach Overview:
Use two pointers:
i for unique placement
j for traversal

If arr[j] != arr[i] → increment i & set arr[i] = arr[j].

Return i + 1 as length of unique array.
⏱️ Time: O(n)
*/
/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr{1,1,2,2,3,3,4};

    int left = 0;

    for(int right = 1 ; right < arr.size(); right++){
        if(arr[left] ==  arr[right]){
            right++;
        }
        if(arr[left] != arr[right]){
            left++;
            arr[left] = arr[right];
        }
        arr.resize(left + 1);
    }

    cout<<"Items without Duplicacy : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }
    return 0;
}
*/
/*
!🧠 3. Reverse a String / Array

Problem: Reverse an array or string without using extra space.
Example: [1,2,3,4,5] → [5,4,3,2,1]

🧭 Approach Overview:

Two pointers: left = 0, right = n-1.

Swap arr[left] and arr[right], then move left++, right--.

Stop when left >= right.
⏱️ Time: O(n)
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = size-1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;
}
*/
/*
!🧠 4. Squares of a Sorted Array

Problem: Given sorted array (with negatives), return sorted squares.
Example: [-4, -1, 0, 3, 10] → [0, 1, 9, 16, 100]

🧭 Approach Overview:

Use two pointers: left = 0, right = n - 1.

Compare absolute values: bigger square goes at end of result array.

Move pointer which gave larger square inward.
⏱️ Time: O(n)
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {-4, -1, 0, 3, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = size-1;

    while (left < right){

        int sqrtLeft = arr[left] * arr[left];
        int sqrtRight = arr[right] * arr[right];

        if(sqrtLeft > sqrtRight){
            swap(arr[left] , arr[right]);
            left++;
            right--;
        }
    }

    cout<<"Squares of Sorted Array : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }

    return 0;

}

//! Two Sum problem again
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 0, 5, 6, 7};
    int target = 9;

    int size = sizeof(arr) / sizeof(arr[0]);

    bool found = false; // to track if any pair was found

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        { // start from i+1 to avoid duplicates
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found at indices: " << i << " and " << j << endl;
                cout << "Values: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No pair found with sum = " << target << endl;
    }

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <unordered_map> // For hash map
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // Step 1: Create an unordered_map (HashMap)
    // Key → element value
    // Value → element index
    unordered_map<int, int> map;

    // Step 2: Traverse the array
    for (int i = 0; i < nums.size(); i++)
    {
        int current = nums[i];
        int complement = target - current; // number we need to find

        // Step 3: Check if the complement exists in map
        if (map.find(complement) != map.end())
        {
            // Found a pair -> return their indices
            return {map[complement], i};
        }

        // Step 4: Otherwise, store the current number with its index
        // (This will help future elements find their complement)
        map[current] = i;
    }

    // Step 5: If no pair found, return {-1, -1}
    return {-1, -1};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result[0] != -1)
    {
        cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << " + " << nums[result[1]]
             << " = " << target << endl;
    }
    else
    {
        cout << "No valid pair found!" << endl;
    }

    return 0;
}
*/

//! Merge Sort Array
/*
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
*/
/*
#include <iostream>
#include <vector>
using namespace std;
vector<int> mergeSortArray(vector<int> num1, int m, vector<int> num2, int n)
{
    // ab pointers bnate h
    int p1 = m - 1;
    int p2 = n - 1;
    int i = (m + n) - 1;

    // ab while loop lgake values insert krenge
    while (p1 >= 0 && p2 >= 0)
    {
        // ab conditions check krte h
        // sabse phle worst condition check krte h jha ho sakta h hamara num1 ka element num2 k element se bda hua toh usko num of i se replace kr denge taaki num2 ko num1[p1] se replace kr denge
        if (num1[p1] > num2[p2])
        {
            num1[i] = num1[p1];
            p1--;
        }
        // ab hum sare elements jo num2 mein h unhe num1 mein daal denge
        else
        {
            num1[i] = num2[p2];
            p2--;
        }
        // har iteration pr hum i ko minus krenge kyunki hamara har iteration par element toh num1 mein ja rha h
        i--;
    }
    // ab hum check krenge khi hamare elements num2 mein bache toh nhi h
    while (p2 >= 0)
    {
        num1[i] = num2[p2];
        i--;
        p2--;
    }
    return num1;
}

int main()
{
    vector<int> num1{1, 2, 3, 0, 0, 0};
    vector<int> num2{2, 5, 6};

    int m = 3;
    int n = 3;

    vector<int> response;

    response = mergeSortArray(num1, m, num2, n);

    for (auto iter : response)
    {
        cout << iter << " ";
    }
    return 0;
}
*/
//! Remove Duplicates from the array
/*

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7};
    int size = arr.size();

    if (size == 0)
    {
        return 0;
    }
    int i = 0;

    for (int j = 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    arr.resize(i + 1);
    
    cout << "Unique elements: ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}*/
//! To find Majority array - Most repeated number
/*
#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{2, 3, 4, 3, 2, 1, 4, 1, 2, 3};

    // using hashmap to find out the repetition of keys
    unordered_map<int, int> mpp;
    // storing the repetition of numbers
    for(auto iter : arr){
        mpp[iter]++;  //* will store the repeated vales
    }

    //to check most repeated value
    int maxCountValue = INT_MIN;
    int maxCountKey = 0;

    for(const auto &iter : mpp){
        if (iter.second >= maxCountValue)
        {
            maxCountValue = iter.second;
            maxCountKey = iter.first;
        }
    }

    cout<<"Most repeated Value "<< maxCountKey << " occurred " << maxCountValue << " times" << endl;

    return 0;
}
*/
//! Code snippet given by Google
/*
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Function to find the key with the maximum value (count)
int findMostRepeatedKey(const unordered_map<int, int> &umm)
{
    if (umm.empty())
    {
        // Handle the case where the map is empty
        throw runtime_error("Map is empty.");
    }

    // Initialize variables to track the maximum
    // 'best_key' will store the key with the highest count
    int best_key = umm.begin()->first;
    // 'max_count' will store the highest count found so far
    int max_count = umm.begin()->second;

    // Iterate through all key-value pairs in the map
    for (const auto &pair : umm)
    {
        // 'pair.first' is the key
        // 'pair.second' is the count
        if (pair.second > max_count)
        {
            max_count = pair.second;
            best_key = pair.first;
        }
    }
    return best_key;
}

// Example usage:
int main()
{
    unordered_map<int, int> frequencies = {
        {1, 5},  // Key 1 appears 5 times
        {2, 10}, // Key 2 appears 10 times
        {3, 3}   // Key 3 appears 3 times
    };

    try
    {
        int most_repeated = findMostRepeatedKey(frequencies);
        cout << "The most repeated key is: " << most_repeated << endl; // Output: 2
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
*/
//! To reverse an array
#include<iostream>
#include<vector>
using namespace std;

// reverse elements in arr between indices start and end (inclusive)
void reverseSubarray(vector<int> &arr, int start, int end){
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
} 

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    //Printing Original Array First
    cout<<"Original Array : ";
    for(auto iter : arr){
        cout<<iter<<" ";
    }
    cout<<endl;

    // core logic to reverse first k elements to the right Side(example)
    reverseSubarray(arr, 0, arr.size());
    reverseSubarray(arr, 0 , k);
    reverseSubarray(arr, k, arr.size());

    // print result
    for (int v : arr) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
