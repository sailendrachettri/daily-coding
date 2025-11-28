class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mp;

        for(int i = 1; i <= nums.size(); i++){
            mp[i] = 0;
        }

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            cout << it.first << " " << it.second << endl;
        }

        for(auto it : mp){
            if(it.second == 0) return it.first;
        }

        return nums.size()+1;
    }
};