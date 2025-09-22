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