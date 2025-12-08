class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        nums.push_back(k);
        priority_queue<int, vector<int>, greater<>> pq(nums.begin(), nums.end());
        int count = 0;

        while(pq.size() >= 2 && pq.top() < k){
            int x = pq.top(); 
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(2LL*x + y < k) pq.push(2LL*x+y);

            count++;
        }

        return count;
    }
};