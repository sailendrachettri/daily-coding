class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int, int> mp;
        int total = 0;

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            if(it.second % k == 0) total += (it.first*it.second);
        }

        return total;
    }
};