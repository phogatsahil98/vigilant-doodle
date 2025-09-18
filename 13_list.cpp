/*
!🧠 Key Functions of list:
?Function	        Description	                    Example
push_back(x)	    Add element at end	            l.push_back(10)
push_front(x)	    Add element at start	        l.push_front(5)
pop_back()	        Remove last element	            l.pop_back()
pop_front()	        Remove first element	        l.pop_front()
front()	            First element	                cout << l.front()
back()	            Last element	                cout << l.back()
begin() / end()	    Iterator start/end	            auto it = l.begin()
insert(it, x)	    Insert x before position it	
erase(it)	        Remove element at iterator it	
clear()	            Erase all elements	            l.clear()
size()	            Count of elements	            l.size()
sort()	            Sort list in ascending order	l.sort()
reverse()	        Reverse the list	            l.reverse()
remove(x)	        Removes all occurrences of x	l.remove(10)
empty()	            Returns true if list is empty	l.empty()
*/
/*
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(10);
    l.push_front(5);
    l.push_back(20);

    for (auto x : l) {
        cout << x << " ";
    }

    return 0;
}
*/

// TODO: Sample Problem : Create a list of 5 numbers entered by user, sort them, and print in reverse

/*#include<iostream>
#include<list>

using namespace std;

int main(){
    int size, val;
    cout<<"Enter the Size of List";
    cin>>size;

    list<int> ls(size);

    list<int> :: iterator itr;
    for (itr = ls.begin(); ls.size(); itr++)
    {
        itr = ls.push_back(val);
    }
    return 0;    
}*/
// ! Above Code has issues and i have googled it Sorry ChatGPT i cheated You
/*
#include<iostream>
#include<list>
using namespace std;

int main(){
    int size, val;
    cout << "Enter the size of the list: ";
    cin >> size;

    list<int> ls;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> val;
        ls.push_back(val);  // Add value to list
    }

    cout << "Elements in the list are:\n";
    for (int val : ls) {
        cout << val << " ";
    }

    return 0;
}
*/

// TODO: Reverse a List : Create a list of integers, reverse it using built-in function, and display.
/*
#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> ls {5, 4, 3, 2, 1};
    ls.reverse();
    for(auto x : ls){
        cout<<x<<" ";
    }
    return 0;
}
*/

// TODO: Remove Specific Element : Create a list with repeated elements and remove all occurrences of a specific number.
/*
#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    list <int> ls{1, 2, 3, 4, 5, 3, 5, 6};

    ls.remove(5);
    ? Or [](int x){ return x == 5; }

    for(auto x : ls){
        cout<<x<<" ";
    }
    return 0;
}
*/
// TODO: Sort the list : Input integers into a list and sort them using list's sort function.
/*
#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    list <int> ls{8, 7, 6, 5, 4, 3};
    ls.sort();

    for(auto i : ls){
        cout<<i<<" ";
    }
    return 0;
}
*/

// TODO: Merge 2 List : Take two sorted lists and merge them using the built-in merge() function.
/*
#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    list <int> ls1{3, 2, 7, 6, 5, 4};
    list <int> ls2{8, 6, 5, 6, 7, 9, 8};

    ls1.merge(ls2);
    ls1.sort();

    for(auto ms : ls1){
        cout<<ms<<" ";
    }
    return 0;
}
*/
// TODO:  Unique Elements Only :Given a list with duplicates, remove consecutive duplicate elements using unique().
/*
#include<iostream>
#include<list>

using namespace std;

int main(){
    list <int> ls{4, 8, 8, 7, 5, 4, 5, 5, 7};

    ls.unique();
    for(auto u : ls){
        cout<<u<<" ";
    }
    return 0;
}
*/

// TODO: Splice OPeration : // Create two lists and move some elements from one list to another using splice().
// ? Sorry GPT i googled it too and cheated once again 
/*
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ls1{6, 5, 4, 5, 6};
    list<int> ls2{6, 5, 4, 7};

    ! Insert entire ls2 into ls1 at the 3rd position (0-based index)
    auto it = ls1.begin();
    advance(it, 3);  // Move iterator to the 4th element (after 3 elements)
    
    ls1.splice(it, ls2); // Insert all elements of ls2 into ls1 at position 'it'

    for(auto s : ls1){
        cout << s << " ";
    }

    return 0;
}
*/
// TODO:  Use Iterator to Traverse and Delete : Use iterator to traverse a list and delete elements > 10.
// ? Sorry GPT Again i googled,as my logic was wrong again 
/*
#include<iostream>
#include<iterator>
#include<list>

using namespace std;

int main() {
    list<int> ls{26, 8, 9, 87, 6, 54};

    ? Remove elements greater than 10
    ls.remove_if([](int x) {
        return x > 10;
    });

    ? Print the updated list
    for (int x : ls) {
        cout << x << " ";
    }

    return 0;
}
*/
//  ! Approach 2 
/*
! Using iterator with erase 
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> ls{26, 8, 9, 87, 6, 54};

    for (auto it = ls.begin(); it != ls.end(); ) {
        if (*it > 10) {
            it = ls.erase(it);  // erase returns the next valid iterator
        } else {
            ++it;               // advance manually only if not erased
        }
    }

    ? Print remaining elements
    for (int x : ls) {
        cout << x << " ";
    }

    return 0;
}
*/
// TODO: Use Iterator to Traverse and Delete : Use iterator to traverse a list and delete elements > 10.
/*
#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main(){
    list <int> ls{6, 8, 78, 7, 65, 45, 6};

    ls.remove_if([](int x){return x > 10;});
    
    for(auto ri : ls){
        cout<<ri<<" ";
    }
    return 0;
}
*/
// ? Approach 2 : Using Iterator and Manual Erase (When logic is more complex)
/*
#include <algorithm>
#include <iostream>
#include<iterator>
#include <list>

using namespace std;

int main() {
    list<int> ls{6, 8, 78, 7, 65, 45, 6};

    for (auto it = ls.begin(); it != ls.end(); ) {
        if (*it > 10) {
            it = ls.erase(it);  // erase returns next valid iterator
        } else {
            ++it;
        }
    }

    for (int val : ls) {
        cout << val << " ";
    }

    return 0;
}
*/
// TODO: Palindrome List Checker : Write a function to check if a list of integers is a palindrome.
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

bool isPalindrome(const list<int>& ls) {
    return equal(ls.begin(), ls.end(), ls.rbegin());
}

int main() {
    list<int> ls{1, 2, 1};

    if (isPalindrome(ls)) {
        cout << "The list is a palindrome." << endl;
    } else {
        cout << "The list is not a palindrome." << endl;
    }

    return 0;
}
