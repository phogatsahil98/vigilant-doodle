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
//! Floor & Ceil Values
/*
#include <iostream>
using namespace std;

// Ceil: Smallest element >= target
int ceilValue(int *arr, int lowValue, int highValue, int targetValue)
{
    int low = lowValue;
    int high = highValue;
    int target = targetValue;
    int ans = -1; // Initialize with -1 (not found)

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target)
        {
            // This could be our ceil
            ans = mid;
            high = mid - 1; // Look for smaller index with same condition
        }
        else
        {
            low = mid + 1; // Need larger element
        }
    }
    return ans; // Returns index, -1 if no ceil exists
}

// Floor: Largest element <= target
int floorValue(int *arr, int lowValue, int highValue, int targetValue)
{
    int low = lowValue;
    int high = highValue;
    int target = targetValue;
    int ans = -1; // Initialize with -1 (not found)

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= target)
        {
            // This could be our floor
            ans = mid;
            low = mid + 1; // Look for larger index with same condition
        }
        else
        {
            high = mid - 1; // Need smaller element
        }
    }
    return ans; // Returns index, -1 if no floor exists
}

int main()
{
    int arr[] = {3, 4, 4, 7, 8, 10};
    int targetValue = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ceilIdx = ceilValue(arr, 0, size - 1, targetValue);
    int floorIdx = floorValue(arr, 0, size - 1, targetValue);

    cout << "The ceil value for " << targetValue << " is : ";
    if (ceilIdx != -1)
        cout << arr[ceilIdx] << " at index " << ceilIdx << endl;
    else
        cout << "No ceil exists" << endl;

    cout << "The floor value for " << targetValue << " is : ";
    if (floorIdx != -1)
        cout << arr[floorIdx] << " at index " << floorIdx << endl;
    else
        cout << "No floor exists" << endl;

    return 0;
}
*/
//! Last occurrence of a target element
/*
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int target = 13;

    int size = sizeof(arr)/sizeof(arr[0]);

    int lowPointer = 0;
    int highPointer = size-1;

    // occurrence ko store kro
    int result = -1;
    while (lowPointer <= highPointer)
    {
        // mid ko find out kro
        int mid = lowPointer + (highPointer - lowPointer) / 2;

        // possibility h ki last element mid hi ho tab
        if(arr[mid] ==  target){
            result = mid;
            lowPointer = mid + 1;
        }
        // ab maan lo ki center wala nhi h balki iske aage wala h tab
        if(target < arr[mid]){
            highPointer = mid - 1;
        }
        if(target > arr[mid]){
            lowPointer = mid + 1;
        }
    }
    cout<<"Last occurrence is at index : "<<result;
}
*/
/*
//! Now to find first and last occurrence as well
#include<iostream>
#include<vector>
using namespace std;

int firstFunction(vector<int> &arr, int size, int target) {
    int low = 0;
    int high = size - 1;

    int result = -1;
    while(low <= high){
        // finding mid
        int mid = low + (high - low) / 2;
        // assume our first occurred element is at mid then
        if(arr[mid] == target){
            result = mid;
            high = mid - 1;
        }
        // maan lo target bda h tab
        if(target > arr[mid]){
            low = mid + 1;
        }
        // agr target chhota h tab
        if(target < arr[mid]){
            high = mid - 1;
        }
    }
    return result;
};

int lastFunction(vector<int> &arr, int size,  int target){
    int low = 0;
    int high = size - 1;

    int result = -1;
    while (low <= high)
    {
        // finding mid
        int mid = low + (high - low) / 2;
        // assume our first occurred element is at mid then
        if (arr[mid] == target)
        {
            result = mid;
            low = mid + 1;
        }
        // maan lo target bda h tab
        if (target > arr[mid])
        {
            low = mid + 1;
        }
        // agr target chhota h tab
        if (target < arr[mid])
        {
            high = mid - 1;
        }
    }
    return result;
};

int main(){
    vector<int> arr{3, 4, 13, 13, 13, 20, 40};
    int target = 13;

    int size = arr.size();
    // function to find out first occurrence
    int firstOccurrence = firstFunction(arr, size, target);

    // function to find out last occurrence
    int lastOccurrence = lastFunction(arr, size, target);

    cout<<"First Occurrence at "<<firstOccurrence<<" and last occurrence at "<<lastOccurrence;

    return 0;
}
*/
//! To find the occurrence of target number
/*
#include<iostream>
using namespace std;

int first(int *nums ,int size, int target){
    int low = 0;
    int high = size - 1;

    // created another variable to store our result
    int result = -1;
    while (low <= high)
    {
        // find mid first
        int mid = low + (high - low) / 2;
        // assume the mid is possibly our first index
        if(nums[mid] == target){
            result = mid;
            high = mid - 1;
        }
        // if target is bigger than our mid
        if(target > nums[mid]){
            low = mid + 1;
        }
        // if target is less than mid
        if(target < nums[mid]){
            high = mid - 1;
        }
    }
    return result;
}

int last(int *nums ,int size, int target){
    int low = 0;
    int high = size - 1;

    // created another variable to store our result
    int result = -1;
    while (low <= high)
    {
        // find mid first
        int mid = low + (high - low) / 2;
        // assume the mid is possibly our first index
        if (nums[mid] == target)
        {
            result = mid;
            low = mid + 1;
        }
        // if target is bigger than our mid
        if (target > nums[mid])
        {
            low = mid + 1;
        }
        // if target is less than mid
        if (target < nums[mid])
        {
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    int nums[] = {2, 2, 3, 3, 3, 3, 4};
    int target = 1;
    int size = sizeof(nums)/sizeof(nums[0]);

    int firstOccurrence = first(nums , size, target);
    int lastOccurrence = last(nums, size, target);

    if(firstOccurrence == -1){
        cout<<"No Element Found";
    }
    else{
        int totalOccurrence = (lastOccurrence - firstOccurrence) + 1 ;
        cout<<"Total Occurrences are : "<<totalOccurrence;
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int rotatedSortedArray(int *nums, int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // If target found at mid
        if (nums[mid] == target)
        {
            return mid;
        }

        // Check if left half is sorted
        if (nums[low] <= nums[mid])
        {
            // Check if target is in left sorted half
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // Right half is sorted
        else
        {
            // Check if target is in right sorted half
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 0;
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = rotatedSortedArray(nums, size, target);

    if (result != -1)
    {
        cout << "Target " << target << " found at index: " << result << endl;
    }
    else
    {
        cout << "Target " << target << " not found" << endl;
    }

    //? Individual Test Cases :
    // Test case 1: Target in left sorted part
    int nums1[] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test 1: " << rotatedSortedArray(nums1, 7, 5) << endl; 

    // Test case 2: Target in right sorted part
    int nums2[] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test 2: " << rotatedSortedArray(nums2, 7, 1) << endl; 

    // Test case 3: Target not found
    int nums3[] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test 3: " << rotatedSortedArray(nums3, 7, 3) << endl;

    // Test case 4: Single element
    int nums4[] = {1};
    cout << "Test 4: " << rotatedSortedArray(nums4, 1, 1) << endl; 
    return 0;
}
*/
//? Repeating above code so i can revise above concept
/*
#include<iostream>
using namespace std;

int rotatedSortedArray(int *nums, int size, int target){
    int low = 0;
    int high = size - 1;
    
    while (low <= high)
    {
        // checking it's mid
        int mid = low + (high - low) / 2;
        // checking if the left half is sorted or not
        // check kro khi hamara element mid wala hi na ho
        if(nums[mid] == target){
            return mid;
        }
        // will check if left part is sorted
        if (nums[low] <= nums[mid])
        {
            // ab check kro kya hamara element yha exist krta h ya nhi 
            if(nums[low] <= target && target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
            // check if right part is sorted or not
        else{
            // yha check kro ki hamara element khi right mein toh nhi h 
            if(nums[mid] < target && target < nums[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }   
    return -1;
} 

int main(){
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    int size = sizeof(nums)/sizeof(nums[0]);

    int response = rotatedSortedArray(nums, size, target);
    if(response != -1){
        cout<<"Target Found at Index "<<response<<endl;
    }
    else{
        cout<<"No Element Exist of Targeted Value";
    }

    int nums1[] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test 1: " << rotatedSortedArray(nums1, 7, 5) << endl;

    // Test case 2: Target in right sorted part
    int nums2[] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test 2: " << rotatedSortedArray(nums2, 7, 1) << endl;

    // Test case 3: Target not found
    int nums3[] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Test 3: " << rotatedSortedArray(nums3, 7, 3) << endl;

    // Test case 4: Single element
    int nums4[] = {1};
    cout << "Test 4: " << rotatedSortedArray(nums4, 1, 1) << endl;

    return 0;
}
*/
//! Minimum in Rotated Sorted Array
/*
#include <iostream>
using namespace std;

int minimumInRotatedSortedArray(int arr[], int n)
{
int low = 0;
int high = n - 1;

while (low < high)
{
int mid = low + (high - low) / 2;

// If mid element is greater than rightmost,
// then minimum lies in the right half
if (arr[mid] > arr[high])
{
low = mid + 1;
}
// Otherwise, it lies in the left half (including mid)
else
{
high = mid;
}
}

// At the end, low == high pointing to the smallest element
return arr[low];
}

int main()
{
int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
int n = sizeof(arr) / sizeof(arr[0]);

int smallest = minimumInRotatedSortedArray(arr, n);
cout << "Smallest Element Present in the Array is : " << smallest << endl;

return 0;
}
*/
/! To find peak Elements in an Array
/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> findPeakElement(vector<int> &arr, int size)
{
vector<int> peaks; // 👈 New vector to store peaks safely

// Case 1: Single element
if (size == 1)
{
peaks.push_back(0);
return peaks;
}

// Case 2: First element
if (arr[0] >= arr[1])
{
peaks.push_back(0);
}

// Case 3: Last element
if (arr[size - 1] >= arr[size - 2])
{
peaks.push_back(size - 1);
}

// Case 4: Elements in between
int low = 1, high = size - 2;
while (low <= high)
{
int mid = low + (high - low) / 2;

// Peak condition
if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
{
peaks.push_back(mid);

// Move both directions to find others
if (arr[mid - 1] > arr[mid + 1])
high = mid - 1;
else
low = mid + 1;
}
// If left side is greater → shift left
else if (arr[mid - 1] > arr[mid])
{
high = mid - 1;
}
// Else shift right
else
{
low = mid + 1;
}
}

return peaks;
}

int main()
{
vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
int size = arr.size();

// 👇 Function returns a new vector of peak indices
vector<int> peaks = findPeakElement(arr, size);

cout << "Peak indices: ";
for (int i : peaks)
{
cout << i << " ";
}
cout << endl;

return 0;
}
*/
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




