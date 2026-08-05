class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(int &val : nums){
            auto it = mp.find(val);

            if(it != mp.end()){
                return val;
            }

            mp[val]++;
        }

        return -1;
    }
};