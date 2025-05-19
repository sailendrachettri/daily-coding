class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> temp;
        set<int> st;

        for(int val : nums1){
            bool present = false;

            for(int i = 0; i < nums2.size(); i++){
                if(val == nums2[i]){
                    present = true;
                    break;
                }
            }

            if(!present)
                st.insert(val);
        }

        for(int val : st)
            temp.push_back(val);

        ans.push_back(temp);
        temp.clear();
        st.clear();

        for(int val : nums2){
            bool present = false;

            for(int i = 0; i < nums1.size(); i++){
                if(val == nums1[i]){
                    present = true;
                    break;
                }
            }

            if(!present)
                st.insert(val);
        }

        for(int val : st)
            temp.push_back(val);

        ans.push_back(temp);

        return ans;
    }
};