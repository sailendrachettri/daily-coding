class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                int a = nums[i];
                int b = nums[j];
                int c = j+1;
                int d = nums.size()-1;

                while(c < d){
                    long long sum = 1LL * nums[c] + nums[d];

                    if(sum + a + b == target) ans.insert({a, b, nums[c++], nums[d--]});
                    else if(sum + a + b > target) d--;
                    else c++;
                }
            }
        }

        for(auto it : ans)
            res.push_back(it);

        return res;
    }
};