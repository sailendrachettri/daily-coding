class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> mp;

        for(int i = 0; i <= nums.size(); i++){
            mp[i] = 0;
        }

        for(int num : nums){
            mp[num]++;
        }

        for(auto it : mp){
            if(it.second == 0) return it.first;
        }

        return -1;
    }
};