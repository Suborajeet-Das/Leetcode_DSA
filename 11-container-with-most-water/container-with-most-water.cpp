class Solution {
public:
    int maxArea(vector<int>& height) {

      int n = height.size();
      int l = 0;
      int r = n-1;
      int ans = 0;
      while(l<r){
        int area = min(height[l], height[r])*(r-l);

        ans = max(ans, area);

        if(height[l] < height[r]){
          l++;
        }else{
          r--;
        }
      }
      return ans;
      // int ans = 0;
      //   for(int i=0; i<height.size()-1; i++){
      //     for(int j=i+1;j<height.size(); j++){
      //       int l = min(height[i], height[j]);
      //       int b = j-i;

      //       ans = max(ans, l*b);
            
      //     }
      //   }
      //   return ans;
    }
};