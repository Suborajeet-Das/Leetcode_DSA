class Solution {
public:
    int missingNumber(vector<int>& nums) {//TC : O(n) && SC : O(n)
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int currSum = 0;
        for(auto it: nums){
            currSum += it;
        }
        return sum-currSum;
        // bool skip = false;

        // for(int i=0; i<n;i++){
        //   if(abs(nums[i]) == n){
        //     continue;
        //   }else if(nums[abs(nums[i])] == 0){
        //     skip = true;
        //   }else{
        //     nums[nums[i]] *= -1;
        //   } 
        // }

        // for(int i=0; i<n;i++){
        //   if(nums[i] == 0 && !skip) return i;
        //   if(nums[i] > 0) return i;
        // }
        // return n;
        // // unordered_map<int, int> mpp;

        // // for(auto it : nums){//O(n)
        // //   mpp[it]++;
        // // }

        // // for(int i=0; i<=n; i++){//O(n)
        // //   if(mpp.find(i) == mpp.end()){
        // //     return i;
        // //   }
        // // }
        // // return 0;
    }
};