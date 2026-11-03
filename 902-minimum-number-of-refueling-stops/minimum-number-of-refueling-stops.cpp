class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int ans = 0;
        int dist = startFuel;
        int idx = 0;

        while(dist < target){
            while(idx < stations.size() && stations[idx][0] <= dist){
                pq.push(stations[idx][1]);
                idx++;
            }
            if(pq.empty())return -1;
            dist += pq.top();
            pq.pop();
            ans++;
            

        }
        return ans;
    }
};