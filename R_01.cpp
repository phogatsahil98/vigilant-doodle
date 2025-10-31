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
}