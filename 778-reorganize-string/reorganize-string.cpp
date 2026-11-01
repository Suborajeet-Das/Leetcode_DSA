class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;

        int n = s.size();

        for(auto c : s){
            freq[c]++;
        }

        priority_queue<pair<int,char>>pq;

        for(auto it : freq){
            pq.push({it.second, it.first});
        }

        if(n%2==0 && (pq.top().first > n/2)){
            return "";
        }else if(n%2!=0 && (pq.top().first > n/2+1)){
            return "";
        }

        string ans = "";

        while(!pq.empty()){

            auto curr = pq.top();
            curr.first--;

            pq.pop();
            ans += curr.second;
            auto next = pq.top();
            if(!pq.empty()){
                next.first--;

                pq.pop();
                ans += next.second;
                if(next.first != 0){
                   pq.push(next);
                }
            }
            if(curr.first != 0) {
                pq.push(curr);
            }
        }

        return ans;
    }
};