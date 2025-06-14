class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;
        int max_freq = INT_MIN;
        int ans = INT_MIN;

        for(int num : nums)
            freq[num]++;

        for(auto it : freq){
            if(it.second > max_freq){
                ans = it.first;
                max_freq = it.second;
            }
        }
        
        return ans;
    }
};