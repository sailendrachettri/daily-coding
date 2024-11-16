class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        queue<int> arr;
        vector<int> res(nums.size(), -1);

        for(int i = 0; i < nums.size(); i++){
            if(arr.empty() || arr.back() == nums[i]-1){
                arr.push(nums[i]);
                if(arr.size() > k) arr.pop();
            } else {
                arr = queue<int>();
                arr.push(nums[i]);
            }

            if(arr.size() == k)
                res[i] = arr.back();
        }

        return vector<int>(res.begin() + (k-1), res.end());
    }
};