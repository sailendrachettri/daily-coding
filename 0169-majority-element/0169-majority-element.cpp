class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int fr = -1;
        int ans = -1;

        for(int val : nums){
            freq[val]++;
        }

        for(auto it : freq){
            if(fr < it.second){
                ans = it.first;
                fr = it.second;
            }
        }

        return ans;
    }
};