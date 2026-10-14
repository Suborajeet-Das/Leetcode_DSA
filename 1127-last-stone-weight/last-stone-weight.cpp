class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // 2 7 4 1 8 1
        //every step y n x -> y-x -> stone y = y-x
        //repeat
        //2 4 1 1 1
        //2 1 1 1
        //1 1 1
        //1
        priority_queue<int> pq(stones.begin(), stones.end());
        // 8,7,4,2,1,1

        while(pq.size() >= 2){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            int diff = y-x;
            if(diff != 0){
                pq.push(diff);
            }
        }
        if(pq.size() == 0) return 0;

        return pq.top();

    }
};