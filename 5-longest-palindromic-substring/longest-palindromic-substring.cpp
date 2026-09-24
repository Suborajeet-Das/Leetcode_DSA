class Solution {
public:
    int start = 0;
    int maxLen = 1;

    void expand(string &s, int left, int right) {

        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        // We expanded one step too far, so correct the length
        int currLen = right - left - 1;

        if (currLen > maxLen) {
            maxLen = currLen;
            start = left + 1;
        }
    }

    string longestPalindrome(string s) {

        if (s.empty())
            return "";

        for (int i = 0; i < s.size(); i++) {

            // Odd length palindrome
            expand(s, i, i);

            // Even length palindrome
            expand(s, i, i + 1);
        }

        return s.substr(start, maxLen);
    }
};