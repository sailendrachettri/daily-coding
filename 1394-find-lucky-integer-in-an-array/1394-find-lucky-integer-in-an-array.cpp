class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        int ans = INT_MIN;

        for(int val : arr) mp[val]++;

        for(auto it : mp){
            if(it.second == it.first) {
                ans = max(it.first, ans);
            }
        }

        return ans == INT_MIN ? -1 : ans;
    }
};