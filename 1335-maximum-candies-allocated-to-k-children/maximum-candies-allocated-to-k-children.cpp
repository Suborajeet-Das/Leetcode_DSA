class Solution {
public:
    bool satisfy(vector<int>& candies, long long k, int mid){
      long long count = 0;
      for(auto it : candies){
            count = count + it/mid;
      }
      if(count >= k) return true;
      return false;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = 0;

        for(auto it : candies){
          sum += it;
        }
        long long maxCandies = sum/k;//upper limit
        int low = 1;
        long long high = maxCandies;

        while(low <= high){
          int mid = low + (high-low)/2;

          if(satisfy(candies, k, mid)){
            low = mid+1;
          }else{
            high = mid-1;
          }
        }
        return high;
    }
};