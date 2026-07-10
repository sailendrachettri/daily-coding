class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-2; i++){
            int a = nums[i];
            int b = i+1; 
            int c = nums.size()-1;

            while(b < c){
                int sum = nums[b] + nums[c];

                if(sum + a == 0) ans.insert({a, nums[b++], nums[c--]});
                else if(sum + a > 0) c--;
                else b++;
            }
        }

        for(auto it : ans){
            res.push_back(it);
        }

        return res;
    }
};