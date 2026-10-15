class KthLargest {
private:
int k;
priority_queue<int, vector<int>, greater<int>>pq;
public:
    KthLargest(int k, vector<int>& nums) {
        //INITALISE
        this->k = k;
        for(auto it: nums){
            pq.push(it);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        //given nums

        //add val in nums
        pq.push(val);
        //prioritu queue
        //4,5,8,2,3,5,10,9
        if(pq.size() > k){
            pq.pop();
        }
       
        //top k ele 8,9,10
        //
        //return kth ele(smallest)
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */