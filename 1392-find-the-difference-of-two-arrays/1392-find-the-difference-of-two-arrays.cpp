class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<vector<int>> ans;

        for(int val : nums2)
            mp[val]++;
        
        set<int> temp;
        vector<int> unq;
        for(int val : nums1){
            auto it = mp.find(val);

            if(!(it != mp.end())){
                temp.insert(val);
            }
        }

        for(int val : temp)
            unq.push_back(val);

        ans.push_back(unq);
        temp.clear();
        unq.clear();
        mp.clear();

        for(int val : nums1){
            mp[val]++;
        }

        for(int val : nums2){
            auto it = mp.find(val);

            if(!(it != mp.end())){
                temp.insert(val);
            }
        }

        for(int val : temp)
            unq.push_back(val);

        ans.push_back(unq);

        return ans;

    }
};