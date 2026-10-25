class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        for (int i = 0; i < arr.size(); i++) {
            pq.push({arr[i], i});
        }

        vector<int> ans(arr.size());
        int rank = 0;
        int prev = 0;

        while (!pq.empty()) {
            auto [val, idx] = pq.top();
            pq.pop();

            if (rank == 0 || val != prev) {
                rank++;
                prev = val;
            }

            ans[idx] = rank;
        }

        return ans;
    }
};