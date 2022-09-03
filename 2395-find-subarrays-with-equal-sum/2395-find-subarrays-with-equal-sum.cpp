class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        int size = nums.size();
        vector<int> ans;
        int sum = 0;
        
        for(int i = 0; i < size-1; i++)
        {
            sum = nums[i] + nums[i+1];
            ans.push_back(sum);
        }
        
        if(ans.size() <= 1)
            return false;
        
        for(int i = 0; i < ans.size(); i++)
        {
            for(int j = i+1; j < ans.size(); j++)
            {
                if(ans[i] == ans[j])
                    return true;
            }
        }
        
        return false;
    }
};