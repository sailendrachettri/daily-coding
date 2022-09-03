class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> vals;
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            vals.insert(nums[i]);
        }
        
        nums.erase(nums.begin(), nums.end() );
        
        for (set<int>::iterator it=vals.begin(); it!=vals.end(); ++it)
            nums.push_back(*it);
        
        return vals.size();
    }
};