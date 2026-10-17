class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        for (auto& x : s) {
            x = tolower(x);
        }
        while(l<r){
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if(s[l] == s[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }
};