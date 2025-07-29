class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;
        int ans = 0;

        for(int val : nums){
            freq[val]++;
        }

        for(auto it : freq){
            if(count < it.second){
                ans = it.first;
                count = it.second;
            }
        }

        return ans;
    }
};