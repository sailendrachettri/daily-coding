class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uq;

        for(const int &val : nums){
            uq.insert(val);
        }

        nums.clear();

        for(const int & val : uq){
            nums.push_back(val);
        }

        return uq.size();
    }

};