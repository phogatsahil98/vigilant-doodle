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
       /*
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
*/
//! To check the maximum occurrence of 1's  
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1, 4, 1, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 1){
            count++;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else{
            count = 0;
        }
    }
    cout<<"Maximum Streak of 1's is : "<<maxCount;

    return 0;
}
*/
//! To find the number which appears Ones and other number which appears Twice
/*
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> number{1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 0, 9, 8, 7, 6};

    unordered_map<int, int> freq;

    // Count frequency of each number
    for (int i = 0; i < number.size(); i++)
    {
        freq[number[i]]++;
    }

    vector<int> oneRepeat;
    vector<int> twoRepeat;

    // Categorize based on frequency
    for (auto &pair : freq)
    {
        if (pair.second == 1)
        {
            oneRepeat.push_back(pair.first);
        }
        else if (pair.second == 2)
        {
            twoRepeat.push_back(pair.first);
        }
    }

    cout << "Numbers which come only once: ";
    for (auto iter : oneRepeat)
    {
        cout << iter << " ";
    }
    cout << endl;

    cout << "Numbers which come exactly twice: ";
    for (auto iter : twoRepeat)
    {
        cout << iter << " ";
    }
    cout << endl;

    return 0;
}
*/
//? Now I Will Implement it
/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> freq{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 4, 5, 6, 7, 8, 9, 0};

    unordered_map<int , int> freqCheck;

    for(int i = 0 ; i < freq.size(); i++){
        freqCheck[freq[i]]++;
    }

    // If the Value are repeated only once
    vector<int>oneTime;
    for(auto iter : freqCheck){
        if (iter.second == 1){
            oneTime.push_back(iter.first);
        }
    }
    // Printing Values that are repeated only 1 times
    cout << "Values that are repeated only 1 times : ";
    for (auto iter : oneTime)
    {
        cout<<iter<<" ";
    }
    cout<<endl;


    vector<int>twoTime;
    for(auto iter : freqCheck){
        if(iter.second == 2){
            twoTime.push_back(iter.first);
        }
    }
    // Printing Values that are repeated for 2 times
    cout << "Values that are repeated for 2 times : ";
    for(auto iter : twoTime){
        cout<<iter<<" ";
    }
    cout<<endl;
    return 0;
}
*/
//! Using XOR Operator
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> numbers{2, 3, 4, 2, 4, 3 , 5};

    int result = 0;
    for(auto iter : numbers){
        result = result ^ iter;
    }

    cout<<"The Single Number present is : "<<result;

    return 0;
}
*/
//! Longest Subarray with given Sum K(Positives)
/*
TODO : Example 1:
*Input Format: N = 3, k = 5, array[] = {2,3,5}
?Result: 2
*Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.
*/
/*
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 10;
    int size = sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    int currSum = 0;
    for(int i = 0 ; i < size ; i++){
        if (currSum == target)
        {
            cout<<"The Total Number of counts are : "<<count;
            break;
        }
        currSum += arr[i];
        count++;
    }

    return 0;
}
*/
//! Sliding Window To find Longest Subarray with given sum 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10;

    int left = 0, right = 0;
    int sum = 0;
    int maxLen = 0;

    while (right < n)
    {
        sum += arr[right]; // include current element

        // shrink window if sum > k
        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        // check if sum == k
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    cout << "Longest subarray length with sum " << k << " is: " << maxLen << endl;

    return 0;
}
