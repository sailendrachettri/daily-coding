class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;

        for(int i = 0; i < m; i++){
            ans.push_back(nums1[i]);
        }

        for(int i = 0; i < n; i++){
            ans.push_back(nums2[i]);
        }

        sort(begin(ans), end(ans));

        nums1.clear();
        for(int val : ans){
            nums1.push_back(val);
        }
    }
};