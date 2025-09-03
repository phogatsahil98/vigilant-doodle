Counting Frequencies of Array

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Creating a Map
        map<int, int> createmap;

        // Computing Map
        for (auto iter : nums) {
            createmap[iter]++;
        }

        // fetching data into vector 
        vector<vector<int>> result;
        for (auto iter1 : createmap) {
            result.push_back({iter1.first, iter1.second});
        }
        return result;
    }
};

Highest Occurring Element in an Array

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        // Creating map for storing frequency
        map < int , int > freq;

        // Computing frequencies
        for(auto iter : nums){
            freq[iter]++;
        } 
 
        // Step 2: Find element with max frequency
        int maxFreq = 0;   
        int element = -1;  

        for (auto iter : freq) {
            if (iter.second > maxFreq) {
                maxFreq = iter.second;
                element = iter.first;
            }
        }
        return element;
    }
};
