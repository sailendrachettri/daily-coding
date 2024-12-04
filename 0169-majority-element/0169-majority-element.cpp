class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto item : freq){
            if(item.second > maxi){
                maxi = item.second;
                ans = item.first;
            }
        }

        return ans;


    }
};