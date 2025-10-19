// If we are take Direct Approach then our time complexity will be O(N)
// ? Example
// TODO : Write a program to calculate the number of occurence
/*
#include<iostream>
using namespace std;
int main(){
    int arr[1000];

    int count;
    cout<<"Enter total number of Input you want to take : ";
    cin>>count;

    for(int i = 1; i <= count; i++){
        cin>>arr[i];
    }

    * Taking input for a number
    int chosen;
    cout<<"Enter a number you want to check occurence : ";
    cin>>chosen;

    * Computation of Calculating number of occurence
    int counter = 0;
    for(int j = 0; j <= count; j++){
        if (arr[j] == chosen)
    counter++;
    }

    cout<<"Total number of occurences are : "<<counter;
    return 0;
}
*/
// ? Using Hashing Time Complexity will go down to O(logN);
/*
#include<iostream>
using namespace std;
int main(){
    int arr[10];

    int count;
    cout<<"Enter a number of count till you want to take input : ";
    cin>>count;

    // Taking input in an array
    for(int i = 0; i < count; i++){
        cin>>arr[i];
    }

    // Computing into hashing
    int hash[count+1] = {0};
    for (int j = 0; j < count ; j++){
        hash[arr[j]]++;
    }

    // Fetching Number
    cout<<"Frequency of Number "<<endl;
    for(int k = 1 ; k <= count ; k++){
        cout<<k <<" is " <<hash[k]<<" times"<<endl;
    }

    return 0;
}
*/
// ? Using Hash_Map
/*
    map are type of key value pair
*/
/*
#include <unordered_map>
#include <algorithm>
#include<vector>
#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter count : ";
    cin >> count;

    int arr[count];
    * Taking input
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    * Computing Frequency
    for (int j = 0; j < count; j++)
    {
        mpp[arr[j]]++;
    }

    * copy to vector
    vector<pair<int, int>> freq(mpp.begin(), mpp.end());
    * using vector sorting the Map
    sort(freq.begin(), freq.end());

    * Fetching total number;
    for (auto it : freq)
    {
        cout << "For " << it.first << " Frequencies are  - > " << it.second << endl;
    }

    return 0;
}
*/
// ! Using Map But it will take O(logN) in all possible cases
/*
#include<map>
#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter the number of count : ";
    cin>>count;

    int arr[count];
    * Taking input
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    map <int , int> inputmap;
    * Computing Frequency
    for (int j = 0; j < count; j++)
    {
        inputmap[arr[j]]++;
    }

    * Fetching frequency
    for(auto iter : inputmap){
        cout<<"For :"<<iter.first<< " Frequencies are -> "<<iter.second<<endl;
    }

    return 0;
}
*/