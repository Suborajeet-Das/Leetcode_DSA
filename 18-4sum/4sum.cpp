class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        sort(a.begin(), a.end());
        int n = a.size();
        vector<vector<int>> ans;

        for(int i=0; i<n-3; i++){
            if(i>0 && a[i]==a[i-1]) continue;
            for(int j=i+1; j<n-2; j++){
                int l = j+1;
                int r = n-1;
                if(a[j]==a[j-1] && j-i>1) continue;

                while(l<r){
                    long long sum = (long long)a[i]+a[j]+a[l]+a[r];

                    if(sum == target){
                        ans.push_back({a[i], a[j], a[l], a[r]});

                        while(l<r && a[l] == a[l+1]) l++;
                        while(l<r && a[r] == a[r-1]) r--;

                        l++;
                        r--;
                    }else if(sum > target) r--;
                    else l++;
                }
            }
        }
        return ans;
      }
};