class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mp;
        int count = 1;
        int ans = INT_MIN;

        if(nums.size() == 0 || nums.size() == 1)
            return nums.size();

        for(int val : nums){
            mp[val]++;
        }

        auto it = mp.begin();
        int val = it->first;
        it++;

        for(int i = 1; i < mp.size(); i++){
            if(abs(it->first-val) != 1){
                
                ans = max(count, ans);
                count = 1;
            }
            else
                count++;

            val = it->first;
            it++;
        }

        return count > ans ? count : ans;
    }
};
