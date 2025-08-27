class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(int val : nums){
            pq.push(val);
        }

        while(k--){
            cout << pq.top() << " ";
            if(k == 0)
                return pq.top();
            pq.pop();
        }
        return 0;
    }
};