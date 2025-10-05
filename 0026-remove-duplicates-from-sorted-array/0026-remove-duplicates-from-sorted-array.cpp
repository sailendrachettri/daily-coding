class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;

        for(int num : nums){
            st.insert(num);
        }

        nums.clear();
        
        for(int val : st){
            nums.push_back(val);
        }

        return nums.size();

    }
};