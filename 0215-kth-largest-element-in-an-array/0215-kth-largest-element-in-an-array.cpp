class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int idx = 0;
        int ans = 0;

        for(int val : nums){
            pq.push(val);
        }

       
        while(k--){
            ans = pq.top();
            pq.pop();
        }

        return ans;


    }
};