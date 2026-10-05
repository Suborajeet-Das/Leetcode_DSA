class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_map<int,int> occFreq;

        for(auto it : arr){
            freq[it]++;
        }
        for(auto it : freq){
            occFreq[it.second]++;
        }

        for(auto it : occFreq){
            if(it.second >= 2) return false;
        }

        return true;
    }
};