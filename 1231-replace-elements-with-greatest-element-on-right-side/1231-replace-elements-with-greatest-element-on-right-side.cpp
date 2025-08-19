class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(), -1);

        if(arr.size() == 1) return {-1};
        if(arr.size() == 0) return {};


        for(int i = arr.size()-1; i> 0; i--){
            ans[i-1] = max(arr[i], ans[i]);
        }

        return ans;
    }
};