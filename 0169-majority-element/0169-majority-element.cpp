class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int ans, count = 0;

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            if(it.second > count){
                ans = it.first;
                count = it.second;
            }
        }

        return ans;
    }
};