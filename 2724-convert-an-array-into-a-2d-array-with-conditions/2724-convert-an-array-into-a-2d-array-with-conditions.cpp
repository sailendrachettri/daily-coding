class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& arr) {
        multiset<int> ml;
        vector<int> nums = arr, rem, temp;
        vector<vector<int>> ans;

        while(nums.size()){
            for(auto val : nums){
                if(ml.count(val) == 0){
                    ml.insert(val);
                    temp.push_back(val);
                }
                else 
                    rem.push_back(val);
            }
            nums = rem;
            ans.push_back(temp);
            temp.clear();
            rem.clear();
            ml.clear();
        }

        return ans;
    }
};