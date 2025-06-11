class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;

        for(int num : nums){
            if(num != val)
                temp.push_back(num);
        }

        nums.clear();
        for(int val : temp)
            nums.push_back(val);
        
        return (nums.size());
    }
};