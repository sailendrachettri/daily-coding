class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefix_sum(gain.size()+1, 0);
        int ans = INT_MIN;

        for(int i = 0; i < gain.size(); i++){
            prefix_sum[i+1] = gain[i] + prefix_sum[i];
            ans = max(prefix_sum[i], ans);
        }

        return max(ans, prefix_sum[prefix_sum.size()-1]);
    }
};