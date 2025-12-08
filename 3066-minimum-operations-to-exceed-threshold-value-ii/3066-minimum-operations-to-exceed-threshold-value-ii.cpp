class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for(int val : nums) pq.push(val);

        while(pq.top() < k){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();

            long long ans =  (min(x, y) * 2LL + max(x, y));

            pq.push(ans);
            count++;
        }

        return count;
    }
};