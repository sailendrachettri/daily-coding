class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int num : nums){
            auto it = mp.find(num);

            if(it != mp.end()) return num;

            mp[num]++;
        }

        return -1;
    }
};