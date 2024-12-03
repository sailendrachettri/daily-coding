class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto itr : freq){
            cout << itr.first << " " << itr.second << endl;
            if(itr.second == 1) return itr.first;
        }

        return -1;
    }
};