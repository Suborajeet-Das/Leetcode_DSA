class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>temp;

        int r=n-1,l=0,t=0,b=m-1;

        while(b>=t && r>=l){
            for(int i=l; i<=r; i++){
                temp.push_back(matrix[t][i]);
            }
            t++;

            for(int i=t; i<=b; i++){
                temp.push_back(matrix[i][r]);
            }
            r--;

           if(b>=t){
             for(int i=r; i>=l; i--){
                temp.push_back(matrix[b][i]);
            }
            b--;
           }

            if(l<=r){
                for(int i=b; i>=t; i--){
                temp.push_back(matrix[i][l]);
            }
            l++;
            }
        }

        return temp;
    }
};