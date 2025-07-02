class Solution {
public:
    const long long mod = 10000000+7;

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        if(nums.size() == 1)
            return {to_string(nums[0])};

        if(nums.size() == 0) return {};
            

        for(long long i = 0, j = 0; i < nums.size();){
            while(j < nums.size()-1 && (nums[j]%mod-nums[j+1]%mod) == -1){
                j++;
            }

            if(nums[i] == nums[j])                
                ans.push_back(to_string(nums[j]));

            else{
                ans.push_back(
                    to_string(nums[i]) + "->" + to_string(nums[j])
                );
            }

            j++;
            i = j;
            
        }

        return ans;
    }
};