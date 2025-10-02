class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        int ans = 0;

        for(int val : nums)
            p.push(val);
        
        // k--;
        while(k--){
            ans = p.top();
            p.pop();
        }

        return ans;
    }
};