/*
map is an associative container in STL that stores key-value pairs in sorted order based on keys.

It uses a balanced binary search tree (usually Red-Black Tree) internally.

Each key is unique — duplicate keys are not allowed.

! Syntax :
#include <iostream>
#include <map>
using namespace std;

map<KeyType, ValueType> mp;

? Example :
map<string, int> studentMarks;

!| Function               | Purpose                                  |
?| ---------------------- | ---------------------------------------- |
 | `insert({key, value})` | Insert a key-value pair                  |
 | `mp[key] = value`      | Insert or update                         |
 | `erase(key)`           | Delete by key                            |
 | `count(key)`           | Returns 1 if key exists, 0 otherwise     |
 | `find(key)`            | Returns iterator to key, else `mp.end()` |
 | `clear()`              | Removes all elements                     |
 | `size()`               | Number of elements                       |
 | `empty()`              | Check if map is empty                    |
 | `begin()`, `end()`     | Iterators                                |

*/
/*
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marks;

    ?Inserting values
    marks["Sahil"] = 95;
    marks["Aman"] = 89;
    marks.insert({"Rahul", 78});

    ?Iterating
    cout << "Student Marks:\n";
    for (auto it : marks)
    {
        cout << it.first << ": " << it.second << endl;
    }

    ?Search
    if (marks.count("Sahil"))
    {
        cout << "Sahil is found.\n";
    }

    ?Erase
    marks.erase("Rahul");

    cout << "\nAfter Deleting Rahul:\n";
    for (auto it : marks)
    {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}
*/
/*
!🧠 Real - World Use Cases
    Use Case Why map is useful              Word frequency counter Keys as words,
    values as count                         Student database Roll No.or
    Name as key,                            info as value
    Memoization in DP State as key,         result as value
    Custom leaderboard system Name as key,  score as value
*/
/*
!   Want to Master map ?
    Here are 5 quick TODOs to become a pro :
    Create a word frequency counter.
    Implement a leaderboard with names and scores.
    Search and delete a key.
    Sort based on value using vector + sort.
    Explore map<char, vector<string>> structure.
*/
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    map <string , int > leaderboard;

    cout<<"The Scores are out of 5 : ";
    leaderboard.insert({"Sahil", 4});
    leaderboard.insert({"Arnav", 3});
    leaderboard.insert({"Shiven",4});

    leaderboard.find("Akshat");
    leaderboard.erase("Akshat");

    map<char, vector<string>> mcs;
    

}
