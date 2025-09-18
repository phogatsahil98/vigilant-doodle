// ! Count the digits
/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    int N;
    cout<<"Enter a number : ";
    cin>>N;

    while (N>0)
    {
        int lastdigit = N%10;
        ans.push_back(lastdigit);
        N = N/10;
    }

    reverse(ans.begin(), ans.end());

    // printing individually
    for(auto itr : ans){
        cout<<itr<<" ";
    }
}
*/
// ! TO reverse a number
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;

    vector<int> v;
    while(number > 0){
        int last_digit = number % 10;
        v.push_back(last_digit);
        number = number/10;
    }
    for(auto itr : v){
        cout<<itr<<" ";
    }
    return 0;
}