class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> freq;
        vector<int> ans;

        for(int val : nums)
            freq[val]++;
        
        for(auto it : freq){
            if(it.second > 1)
                ans.push_back(it.first);
        }

        return ans;
    }
};