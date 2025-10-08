class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefix_sum(gain.size()+1, 0);
        int ans = INT_MIN;

        for(int i = 0; i < gain.size(); i++){
            prefix_sum[i+1] = gain[i] + prefix_sum[i];
        }

        for(int val : prefix_sum)
            ans = max(ans, val);

        return ans;
    }
};