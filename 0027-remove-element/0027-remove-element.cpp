class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int> ans;

       for(int n : nums){
        if(n != val){
            ans.push_back(n);
        }
       }

       nums = {};

       for(int n : ans){
            nums.push_back(n);
       }

       return nums.size();
    }
};