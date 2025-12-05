class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int, vector<int>> mp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) mp[nums[i]].push_back(i);

        for(int val : queries){
            auto it = mp.find(x);

            if(it != mp.end()){
                if(val > it->second.size()){
                    ans.push_back(-1);
                }else{
                    ans.push_back(it->second[val-1]);
                }
            }else ans.push_back(-1);
        }

        return ans;
    }
};