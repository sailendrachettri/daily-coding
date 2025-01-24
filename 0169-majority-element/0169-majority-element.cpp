class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int maxi = INT_MIN;
        int val = INT_MIN;

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            if(maxi < it.second){
                maxi = it.second;
                val = it.first;
            }
        }

        return val;


    }
};