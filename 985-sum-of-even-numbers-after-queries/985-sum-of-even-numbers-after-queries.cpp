class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int size = queries.size();
        vector<int> ans(size, 0);
        
        int sum = 0;
        
        for(int num : nums)
            if(num % 2 == 0)
                sum += num;
        
        for(int i = 0; i < size; i++)
        {
            int index = queries[i][1];
            
            if(nums[index] % 2 == 0)
                sum -= nums[index];
            
            nums[index] += queries[i][0];
            
            if(nums[index] % 2 == 0)
                sum += nums[index];
            
            ans[i] = sum;
        }
        
        return ans;
    }
};