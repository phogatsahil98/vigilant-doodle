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
