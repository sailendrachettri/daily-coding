class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> temp;
        vector<int> ans;

        unordered_map<int, int> mp;

        for(int val : nums1){
            mp[val]++;
        }

        for(int val : nums2){
            auto it = mp.find(val);

            if(it != mp.end()){
                temp.insert(val);
            }
        }

        for(int val : temp)
            ans.push_back(val);

        return ans;
    } 
};