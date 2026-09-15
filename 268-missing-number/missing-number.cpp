class Solution {
public:
    int missingNumber(vector<int>& nums) {//TC : O(n) && SC : O(n)
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(auto it : nums){//O(n)
          mpp[it]++;
        }

        for(int i=0; i<=n; i++){//O(n)
          if(mpp.find(i) == mpp.end()){
            return i;
          }
        }
        return 0;
    }
};