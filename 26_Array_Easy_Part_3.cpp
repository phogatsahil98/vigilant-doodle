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

//! Counting character hashing
/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {'s', 'a', 's', 's', 's', 'z', 's', 'x', 'a', 's', 'q', 'w'};
    int size = sizeof(arr)/ sizeof(arr[0]);

    unordered_map<char , int> hash;

    for(int i = 0 ; i < size; i++){
        hash[arr[i]]++;
    }

    cout<<"Occurrence of Character are as follow : "<<endl;
    for(auto iter_1 : hash)
    {
        cout<<iter_1.first<<" -> "<<iter_1.second<<endl;
    }

    return 0;
}
*/

//! Using Array to find out the occurrence of character
/*
#include<iostream>
using namespace std;
int main(){
    char arr[] = {'q', 'w', 'e', 'a', 's', 'd', 't', 'y', 'u', 'g', 'v', 'h', 'j', 'o', 'p', 'l', 'm'};

    int freq[26] = {0};

    for(auto iter : arr){
        freq[iter - 'a']++;
    }

    // Print kr do bhai
    for(int i = 0 ; i < 26; i++){
        if (freq[i] > 0)
        {
            cout<<char(i + 'a')<<" -> "<<freq[i]<<endl;
        }
    }

    return 0;
}
*/

//! To find out the missing value between 1 To N
//? Approach 1 : Using Sum
/*
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 6, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0])+1;

    int totalSum = size*(size+1)/2;

    int actualSum = 0;
    for(auto iter : arr){
        actualSum+=iter;
    }

    int missingNumber = totalSum - actualSum;

    cout<<"The Missing Number is : "<<missingNumber;

    return 0;
}
*/
//? Approach 2 : Using XOR Operator
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 7, 5, 6, 3};
    int XOR_1 = 0;
    int XOR_2 = 0;

    int size = sizeof(arr)/ sizeof(arr[0]) + 1;

    // Doing XOR of all elements from 1 to size
    for(int i = 1 ; i <= size; i++){
        XOR_1 ^= i;
    }

    // Doing XOR of all array elements
    for(auto iter : arr){
        XOR_2 ^= iter;
    }

    int missingNumber = XOR_1 ^ XOR_2;
    cout<<"Missing Number is : "<<missingNumber;

    return 0;
}