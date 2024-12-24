class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi = INT_MIN;
        int ans = -1;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto &it : freq){
            if(maxi < it.second){
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};