class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int left = 0;

        if(nums.size() == 0) return ans;

        for(int i = 1; i <= nums.size(); i++){
            if(i == nums.size() || nums[i-1] != (nums[i]-1)){
                if(left == i-1)
                    ans.push_back(to_string(nums[left]));
                else{
                    string st = "";
                    st += to_string(nums[left]);
                    st += "->";
                    st += to_string(nums[i-1]);
                    ans.push_back(st);
                }
                left = i;
            }
        }

        return ans;
    }
};