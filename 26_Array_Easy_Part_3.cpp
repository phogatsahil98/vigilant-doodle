//! To Print the Union of two Arrays
/*
#include <iostream>
#include <set>
using namespace std;

void printUnion(int arr1[], int arr2[], int size1, int size2)
{
    set<int> s;

    // Insert all elements of arr1
    for (int i = 0; i < size1; i++)
    {
        s.insert(arr1[i]);
    }

    // Insert all elements of arr2
    for (int i = 0; i < size2; i++)
    {
        s.insert(arr2[i]);
    }

    cout << "Union of arrays: ";
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 9, 3, 4, 6};
    int arr2[] = {1, 2, 3, 4, 5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, arr2, size1, size2);

    return 0;
}
*/
//! Calculate duplicate values
/*
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 2, 1, 4, 5, 3, 2, 4};

    // Hash map to store occurrences
    unordered_map<int, int> hash;

    // Count frequency of each element
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    // Print result
    cout << "Occurrences of elements: " << endl;
    for (auto it : hash)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
*/

//! To find out the missing value between 1 To N
