class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26, false);

        for(char c : sentence){
            seen[c-'a'] = true;
        }

        for(auto it : seen){
            if(!it) return false;
        }

        return true;
    }
};