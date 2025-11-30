class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;

        for(vector<int> arr : tasks){
            int sum = arr[0] + arr[1];
            ans = min(ans, sum);
        }

        return ans;
    }
};