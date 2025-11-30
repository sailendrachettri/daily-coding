class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> mp;
        int idx = 0;
        int ans = INT_MAX;

        for(int val : nums){
            mp[val].push_back(idx++);
        }

        for(auto it : mp){
            if(it.second.size() >= 3){
                for(int x = 1; x < it.second.size()-1; x++){
                    int i = it.second[x-1];
                    int j = it.second[x];
                    int k = it.second[x+1];

                    ans = min(ans, abs(i - j) + abs(j - k) + abs(k - i));

                }
            }
        }

        if(ans == INT_MAX) return -1;

        return ans;
    }
};