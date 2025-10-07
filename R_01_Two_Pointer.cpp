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
