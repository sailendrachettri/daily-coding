class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        nums.push_back(k);
        priority_queue<int, vector<int>, greater<int>> pq;
        int count = 0;
        for(int val : nums) pq.push(val);

        while(pq.size() >= 2 && pq.top() < k){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();

            if((x * 2LL + y) < k)
                pq.push(x *2 + y);

            count++;
        }

        return count;
    }
};