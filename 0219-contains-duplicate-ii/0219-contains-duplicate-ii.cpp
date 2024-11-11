class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> numInd;

        for(int i = 0; i < n; i++){
            int curr = nums[i];

            if(numInd.find(curr) != numInd.end()){
                if(i - numInd[curr] <= k) 
                    return true;
            }

            numInd[curr] = i;
        }

        return false;
    }
};