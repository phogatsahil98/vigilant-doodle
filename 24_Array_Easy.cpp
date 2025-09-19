//! To find out Largest element in an array
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{9, 87, 6, 56, 7};

    sort(arr.begin(), arr.end());

    // Printing whole array
    // for(auto iter : arr){
    //     cout<<iter<<" ";
    // }
    
    //! Printing Largest Number 
    int size = arr.size();
    cout << arr[size-1];

    return 0;
}
*/
/*
//! Optimization of above code
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{6, 5, 4, 9, 8, 7, 6, 4, 5, 6};

    int maxElement = 1;

    for (int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    cout<<"Maximum Element : "<<maxElement;
    return 0;
}
*/

//! Second Largest Element without Sorting and Optimal Approach
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr{4, 5, 6, 7, 8, 7};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        // Largest and Second Largest
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }

        // Smallest and Second Smallest
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << secondLargest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

    return 0;
}
