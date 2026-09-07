class Solution {
public:
    string removeDuplicates(string s, int k) {
        //stack = {char, count}
        stack<pair<char, int>> st;

        string ans = "";

        for(char c : s){
            if(st.empty()){
                st.push({c,1});
                continue;
            }
            if(c != st.top().first){
                st.push({c,1});
            }else{
                st.top().second++;
                if(st.top().second == k){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            for(int i=0; i<st.top().second; i++){
                ans += st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};