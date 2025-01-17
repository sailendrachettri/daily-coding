class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++){
            int maxi = nums1[i];
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    bool found = false;

                    while(j < nums2.size())
                        if(maxi < nums2[j++]){
                            ans.push_back(nums2[j-1]);
                            found = true;
                            break;
                        }
                    
                    if(!found)
                        ans.push_back(-1);
                }
            }
        }

        return ans;
        
    }
};