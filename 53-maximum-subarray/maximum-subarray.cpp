class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = 0, ans = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            best = max(nums[i], best+nums[i]);
            ans = max(ans, best);
        }
        return ans;
    }
};