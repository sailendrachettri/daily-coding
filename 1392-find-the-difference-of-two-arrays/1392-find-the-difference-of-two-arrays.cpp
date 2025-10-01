class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq1, freq2;
        set<int> temp;
        vector<int> temp2;
        vector<vector<int>> ans;

        for(int val : nums1)
            freq1[val]++;
        for(int val : nums2)
            freq2[val]++;

        for(int val : nums1){
            if(!(freq2.find(val) != freq1.end())){
                temp.insert(val);
            }
        }

        for(int val : temp){
            temp2.push_back(val);
        }
        ans.push_back(temp2);
        temp.clear();
        temp2.clear();

        for(int val : nums2){
            if(!(freq1.find(val) != freq2.end())){
                temp.insert(val);
            }
        }

        for(int val : temp){
            temp2.push_back(val);
        }
        ans.push_back(temp2);

        return ans;
    }
};