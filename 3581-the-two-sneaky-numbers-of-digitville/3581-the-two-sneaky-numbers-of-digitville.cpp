class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for(int val : nums){
            freq[val]++;
        }

        for(auto it : freq){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};