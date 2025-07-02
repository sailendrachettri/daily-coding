class Solution {
public:
    const long long mod = 10000000+7;

    vector<string> summaryRanges(vector<int>& nums) {
        string temp = "";
        vector<string> ans;

        if(nums.size() == 1){
            temp = to_string(nums[0]);
            return {temp};
        }

        if(nums.size() == 0){
            return {};
        }
            

        for(long long i = 0, j = 0; i < nums.size();){
            while(j < nums.size()-1 && (nums[j]%mod-nums[j+1]%mod) == -1){
                j++;
            }


            if(nums[i] == nums[j]){
                temp += to_string(nums[j]);
                ans.push_back(temp);
               
            }else{
                temp += to_string(nums[i]);
                temp += "->";
                temp += to_string(nums[j]);
                ans.push_back(temp);
            }

            temp = "";
            j++;
            i = j;
            
        }

        return ans;
    }
};