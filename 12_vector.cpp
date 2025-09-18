/*
* What is a Vector (In C++)?
A vector is a dynamic array provided by C++ STL (Standard Template Library). It can grow and shrink in size automatically during runtime.

? #include <vector>
? vector<int> v;

!Function	        Description	Syntax Example
 push_back()	        Add element at end	v.push_back(10);
 pop_back()	        Remove last element	v.pop_back();
 size()	            Returns current size	v.size();
 capacity()	        Allocated memory	v.capacity();
 resize(n)	        Resize vector	v.resize(5);
 clear()	            Removes all elements	v.clear();
 empty()	            Checks if vector is empty	v.empty();
 at(index)	        Access with bounds checking	v.at(2)
 front() / back()	First and last elements	v.front(), v.back()
 insert(pos, val)	Insert at given position	v.insert(v.begin()+2, 99);
 erase(pos)	        Remove element from position	v.erase(v.begin()+1);
 begin() / end()	    Iterator for loop traversal	for(auto it = v.begin();...)

! Initialization Methods :
 vector<int> a;                       // Empty vector
 vector<int> b(5, 100);               // {100, 100, 100, 100, 100}
 vector<int> c = {1, 2, 3};           // Initializer list
 vector<int> d(b);                    // Copy of b
 
*/
/*

! Example Demonstration of Vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);       // Add element
    v.pop_back();         // Remove last
    v.insert(v.begin()+1, 99); // Insert 99 at index 1

    for(int i : v)
        cout << i << " ";
}

*/
/*
 ! Major Functions and their Uses 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ?1. Create an empty vector
    vector<int> v;

    ? 2. push_back() - add elements at end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    ? 3. size() - current number of elements
    cout << "Size: " << v.size() << endl;

    ? 4. capacity() - current allocated memory
    cout << "Capacity: " << v.capacity() << endl;

    ? 5. at(index) - safe element access
    cout << "Element at index 1: " << v.at(1) << endl;

    ? 6. operator[] - direct access (no bounds check)
    cout << "Element at index 2: " << v[2] << endl;

    ? 7. front() and back()
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;

    ? 8. pop_back() - remove last element
    v.pop_back();

    ? 9. insert() - insert at position
    v.insert(v.begin() + 1, 99);  // insert 99 at index 1

    ? 10. erase() - remove element from position
    v.erase(v.begin() + 2);       // erase element at index 2

    ? 11. resize() - resize the vector
    v.resize(5);  // new elements initialized to 0

    ? 12. empty() - check if empty
    cout << "Is empty? " << (v.empty() ? "Yes" : "No") << endl;

    ? 13. clear() - removes all elements
    v.clear();

    cout << "After clear, size: " << v.size() << endl;

    ? 14. assign() - assign same value multiple times
    v.assign(4, 7);  // vector becomes {7, 7, 7, 7}

    ? 15. copy vector
    vector<int> copyV(v);  // copy constructor

    ? 16. traversal using range-based for loop
    cout << "Vector elements (range loop): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    ? 17. iterator-based traversal
    cout << "Using iterators: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
*/

// TODO:  Q1. Insert 5 elements into a vector and print them 
/*
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v{10, 20, 30};

    v.push_back(40);
    v.push_back(50);

    //  printing all elements of vector 
    cout<<"Elements Present in an array is : ";
    for(auto i : v){
        cout<<i<<" ";
    } 
    return 1;
}
*/
/*
TODO: Q2. Find the sum of all elements in a vector.
Input: 1 2 3 4 5
Expected Output: Sum = 15
*/ 
/*
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5};

    int sum = 0;
    for(auto i : v){
        sum += i;
    }
    cout<<sum;
}
*/

/* 
TODO: Q3. Remove the last two elements of a vector and print the remaining.
Input: {11, 22, 33, 44, 55}
Expected Output: 11 22 33
*/
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{11, 22, 33, 44, 55};
    v.pop_back();
    v.pop_back();
    return 1;
}
*/
// !Level 2: Intermediate Logic (Focus Zone)
// TODO: Q4. Find the maximum and minimum element in a vector.
// Input: {4, 9, 2, 17, 3}
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{4, 9, 2, 17, 3};

    int minVal = v[0];
    int maxVal = v[0];

    for(int i = 1; i < v.size(); i++){
        if(v[i] < minVal)
            minVal = v[i];
        if(v[i] > maxVal)
            maxVal = v[i];
    }

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}
*/
/*
TODO: Q5. Reverse a vector and print it.
Input: {1, 3, 5, 7, 9}
Expected Output: 9 7 5 3 1
*/
/*
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v{1, 3, 5, 7, 9};
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
    return 0;
}
*/
/*
TODO: Q6. Insert element 99 at index 2 and print the vector.
Input: {10, 20, 30, 40}
Expected Output: 10 20 99 30 40
*/
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> id{10, 20, 30, 40};
    id.insert(id.begin() + 2, 99);
    for (int i : id) {
        cout << i << " ";
    }
    return 0;
}
*/
/*
STL Functionality & Edge Handling
TODO: Q7. Given a vector, remove all even elements and print the rest.
Input: {5, 8, 3, 10, 13, 6}
Expected Output: 5 3 13
*/
/*
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> ren{5, 8, 3, 10, 13, 6};

    for(auto i : ren){
        if(i/2){
            cout<<i<<" ";
        }
        else{
            cout<<"Every Elements were Even";
        }
    }
}
*/
/*
TODO: Q8. Check if a vector is a palindrome.
Input: {1, 2, 3, 2, 1}
Expected Output: Yes
(Hint: Reverse copy and compare)
*/
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> rc{1, 2, 3, 2, 1};
    * Reverse the vector 
    vector<int> rev = rc;
    reverse(rev.begin() , rev.end());

    if (rc == rev)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
*/
/*
TODO: Q9. Create a vector of size 5, initialized with all elements as 100.
Expected Output: 100 100 100 100 100
*/
/*
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> cc(5,100);
    for(auto i :cc){
        cout<<i<<" ";
    }
    return 0;
}
*/
/*
TODO: Q10. Count how many elements are greater than 10.
Input: {4, 11, 25, 7, 9, 12}
Expected Output: 3
*/
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> ce{4, 11, 23, 7, 9, 12};
    int count = 0;
    int greatestelement = 10;
    for(int i = 0; i < ce.size(); i++){
        if (ce[i] > greatestelement)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
*/
/*
TODO: Q11. Rotate a vector to the right by 2 positions.
Input: {1, 2, 3, 4, 5}
Expected Output: 4 5 1 2 3
(Hint: Use reverse() from <algorithm>)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> ra{1, 2, 3, 4, 5};
    reverse(ra.begin()+2, ra.end());
    for(auto i : ra){
        cout<<i<<" ";
    }
}
/*
vector<int> v{1, 2, 3, 4, 5};
reverse(v.begin(), v.end());        // 5 4 3 2 1
reverse(v.begin(), v.begin()+2);    // 4 5 3 2 1
reverse(v.begin()+2, v.end());      // 4 5 1 2 3
*/
