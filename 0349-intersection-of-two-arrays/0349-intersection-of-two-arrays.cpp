class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;

        for(int num1 : nums1)
            for(int num2 : nums2)
                if(num1 == num2){
                    st.insert(num1);
                    break;
                }
        nums1.clear();

        for(int val : st)
            nums1.push_back(val);
        
        return nums1;
    }
};