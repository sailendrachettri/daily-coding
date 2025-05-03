class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> freq;
        vector<int> ans;

        for(int i = 1; i <= nums.size(); i++){
            freq[i] = 0;
        }

        for(int val : nums)
            freq[val]++;
        
        for(auto it : freq){
            if(it.second == 0)
                ans.push_back(it.first);
        }

        return ans;
    }
};