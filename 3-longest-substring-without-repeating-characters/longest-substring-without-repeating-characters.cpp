class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int left = 0;
        int ans = 0;
        for(int right=0; right<s.size(); right++){
            if(mpp.find(s[right]) != mpp.end() && mpp[s[right]] >= left){
                left = mpp[s[right]]+1;
            }
            mpp[s[right]] = right;
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};