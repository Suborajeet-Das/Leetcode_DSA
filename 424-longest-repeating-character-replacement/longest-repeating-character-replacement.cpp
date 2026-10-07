class Solution {
public:
    bool isValid(unordered_map<char, int>& mpp, int len, int k) {
        int maxi = 0;

        for (auto it : mpp) {
            maxi = max(maxi, it.second);
        }

        return len - maxi <= k;
    }

    int characterReplacement(string s, int k) {
        int ans = 0;
        int l = 0;
        int r = 0;

        unordered_map<char, int> mpp;

        while (r < s.size()) {
            // Add s[r] to the window
            mpp[s[r]]++;
            r++;

            int len = r - l;

            // Shrink until the window becomes valid
            while (!isValid(mpp, len, k)) {
                mpp[s[l]]--;
                l++;

                len = r - l;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};