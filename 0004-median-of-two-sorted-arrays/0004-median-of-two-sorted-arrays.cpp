class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> m;

        for(int val : nums1)
            m.push_back(val);

        for(int val : nums2)
            m.push_back(val);
        
        sort(begin(m), end(m));

        // even
        if(m.size()%2 == 0){
            float val1 = m[m.size()/2];
            float val2 = m[m.size()/2-1];

            float ans = (val1+val2) / 2.0;

            return ans;

        }
        // odd 
        else if(m.size()%2 != 0){
            float val1 = m[m.size()/2];

            return (val1 * 1.0);
        }

        return 0;
    }
};