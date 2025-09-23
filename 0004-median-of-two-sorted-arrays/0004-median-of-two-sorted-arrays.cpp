class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr = nums1;
    
        for(int val : nums2)
            arr.push_back(val);
        
        sort(arr.begin(), arr.end());

        if(arr.size() % 2 != 0){
            float val = arr[arr.size()/2];
            return (val*1.0);
        }

        float val1 = arr[arr.size()/2];
        float val2 = arr[arr.size()/2-1];

        return (val1+val2)/2.0;

    
    }
};