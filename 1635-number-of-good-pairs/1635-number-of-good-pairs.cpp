class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i < j && nums[i] == nums[j])
                    ans++;
            }
        }

        return ans;
    }
};