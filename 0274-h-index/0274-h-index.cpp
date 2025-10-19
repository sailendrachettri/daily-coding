class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans = 0;

        sort(citations.begin(), citations.end(), greater<int>());

        for(int i = 0; i < citations.size(); i++){
            if(citations[i] > ans)
                ans++;
            else  return ans;
        }

        return ans;
    }
};