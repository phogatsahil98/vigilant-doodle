#include<iostream>
using namespace std;
string outerStringOut(string s){
    // sabse phle ek string banao jiske andar iss string ko store kroge
    string result;
    // ab counter banao
    int counter = 0;
    // puri string k uppar traverse kro 
    for(char c : s){
        if(c == '('){
            if(counter > 0){
                result.push_back(c);
            }
            counter++;
        }
        else{
            counter--;
            if(counter > 0){
                result.push_back(c);
            }
        }
    }
    return result;
} 

int main()
{
    string s = "((()))";

    cout<<outerStringOut(s);
    return 0;
}