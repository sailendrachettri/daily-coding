class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi = INT_MIN;
        int ans;

        for(const int &val : nums){
            freq[val]++;
        }

        for(auto it : freq){
            if(maxi < it.second){
                ans = it.first;
                maxi = it.second;
            }
        }

        return ans;


    }
};