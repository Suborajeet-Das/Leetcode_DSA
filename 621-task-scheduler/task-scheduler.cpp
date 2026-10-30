class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int interval = 0;
        unordered_map<char,int>label;

        for(auto it: tasks){
            label[it]++;
        }

        priority_queue<pair<int,char>>pq;

        for(auto it: label){
            pq.push({it.second,it.first});
        }

        while(!pq.empty()){
            int count = 0;
            vector<pair<int,char>>temp;
            while(!pq.empty() && count<=n){
                interval++;
                count++;
                auto curr = pq.top();
                pq.pop();
                curr.first--;
                if(curr.first>0){
                    temp.push_back(curr);
                }
            }
            for(auto it: temp){
                pq.push(it);
            }

            if(count <= n && !pq.empty()){
                interval = interval + (n+1-count);
            }
        }
        return interval;
    }
};