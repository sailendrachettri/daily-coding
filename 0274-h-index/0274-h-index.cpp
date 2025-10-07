class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end(), greater<int>());
        int ans = 0;

        for(int val : c){
            if(val > ans)
                ans++;
            else
                return ans;
        }

        return ans;
    }
};