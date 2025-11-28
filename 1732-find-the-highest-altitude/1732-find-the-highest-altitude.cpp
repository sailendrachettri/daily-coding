class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> pre(gain.size()+1, 0);
        int maxi = INT_MIN;

        for(int i = 1; i <= gain.size(); i++){
            pre[i] = pre[i-1]+ gain[i-1];
            maxi = max(maxi, pre[i-1]);
        }

        return max(maxi, pre[pre.size()-1]);
    }
};