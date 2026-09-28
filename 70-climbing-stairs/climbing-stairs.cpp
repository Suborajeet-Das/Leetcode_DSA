class Solution {
public:
    int f(int k, vector<int>& dp){
        if(k<2) return 1;

        if(dp[k] != -1){
            return dp[k];
        }

        return dp[k] = f(k-1, dp) + f(k-2, dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return f(n, dp);
    }
};