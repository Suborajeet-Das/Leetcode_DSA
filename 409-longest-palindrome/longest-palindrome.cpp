class Solution {
public:
    int longestPalindrome(string s) {
      unordered_map<char, int> freq;
        for(char c : s){
          freq[c]++;//a-1,b-1,c-4,d-2
        }
        int ans = 0;//6

        for(auto it : freq){
          if(it.second%2 == 0){//abccccdd
            ans += it.second;
          }else{
            ans += it.second-1;
          }
        }
        if(ans < s.size()){
          return ans+1;
        }
        return ans;
    }
};