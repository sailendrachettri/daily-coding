class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end(), greater<int>());

        int ans = 0;
        for(int i = 0; i < c.size(); i++){
            if(c[i] > ans)
                ans++;
            else
                return ans;
        }

        return ans;
    }
};