class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> st;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-2; i++){
            int start = i+1; int end = nums.size()-1;

            while(start < end){
                int sum = nums[i] + nums[start] + nums[end];

                if(sum == 0){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    st.insert(temp);
                    temp.clear();
                    start++; 
                }

                if(sum < 0){
                    start++;
                }else{
                    end--;
                }
            }
        }

        for(vector<int> arr : st){
            ans.push_back(arr);
        }

        return ans;
    }
};