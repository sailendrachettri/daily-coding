class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        map<int, int> mp;

        int maxi = *max_element(nums.begin(),  nums.end());
        int mis = INT_MIN;

        for(int i = 1; i <= maxi; i++) mp[i] = 0;
        for(int &val : nums) mp[val]++;

        for(int i = 1; i < nums.size(); i++){
            if((nums[i-1]+1) == nums[i]) sum += nums[i];
            else break;
        }

        for(auto it : mp){
            if(it.second == 0 && it.first >= sum){
                mis = it.first;
                break;
            }
        }

        

        cout << "mis: " << mis << endl << "sum: " << sum << endl;

        if(sum == mis) return sum;
        else if(sum <= mis) return mis;
        else if(sum > maxi) return sum;

        return maxi+1;
    }
};