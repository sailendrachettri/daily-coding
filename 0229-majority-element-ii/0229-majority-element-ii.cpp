class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();

        map<int, int> freq;

        for(int num : nums)
            freq[num]++;
        
        for(auto it : freq)
            if(it.second > size/3)
                ans.push_back(it.first);
        
        return ans;
    }
};