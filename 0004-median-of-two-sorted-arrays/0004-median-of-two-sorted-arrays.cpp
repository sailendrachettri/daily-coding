class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int val : nums2)
            nums1.push_back(val);

        sort(nums1.begin(), nums1.end());

        if(nums1.size()%2 == 0)
            return (nums1[nums1.size()/2] + nums1[(nums1.size()/2)-1]) / 2.0;

        return nums1[nums1.size()/2.0];
    }
};