class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++){
            int idx = -1;
            int val = -1;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    idx = j;
                    break;
                }
            }

            // cout << idx << " ";

            if(idx != -1){
                for(int j = idx; j < nums2.size(); j++){
                    cout << nums2[j] << " " <<nums1[i] << endl;
                    if(nums2[j] > nums1[i]){
                        val = nums2[j];
                        break;
                    }
                }
            }
            
            ans.push_back(val);
            
            idx = -1;
            val = -1;
        }

        return ans;
    }
};