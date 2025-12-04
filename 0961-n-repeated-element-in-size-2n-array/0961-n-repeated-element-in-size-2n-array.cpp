class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int freq = 0, val = 0;
        map<int, int> mp;

        for(int val : nums) mp[val]++;

        for(auto it : mp){
            if(it.second > freq){
                freq = it.second;
                val = it.first;
            }
        }

        return val;

    }
};