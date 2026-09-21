class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele, count=0;

        for(int i=0; i<n; i++){
            if(count == 0){
                count++;
                ele = nums[i];
            }else if(ele == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        int counter = 0;

        for(int i=0; i<n ;i++){
            if(nums[i] == ele){
                counter++;
            }
        }

        if(counter>n/2) return ele;
        else return -1;
       
    }
};