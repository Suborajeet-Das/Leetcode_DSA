class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        string word = "";

        for(int i=0; i<haystack.size(); i++){
            word += haystack[i];
            if(n < word.size()){
                word.erase(word.begin());
            }
            if(needle == word) return i-n+1;
        }
        return -1;
    }
};