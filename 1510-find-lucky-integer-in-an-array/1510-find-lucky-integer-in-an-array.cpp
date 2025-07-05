class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> freq;
        int ans = -1;

        for(int val : arr){
            freq[val]++;
        }

        for(auto it : freq){
            if(it.first == it.second){
                ans = max(ans, it.second);
            }
        }

        return ans;
    }
};