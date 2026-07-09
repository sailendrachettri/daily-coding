class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = 0;

        while(idx < n){
            nums1[m++] = nums2[idx++];
        }

        sort(nums1.begin(), nums1.end());
    }
};