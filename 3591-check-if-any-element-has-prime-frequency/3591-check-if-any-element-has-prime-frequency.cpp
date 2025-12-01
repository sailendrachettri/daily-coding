class Solution {
public:
    bool check(int val){
        if(val <= 1) return false;
        else if(val == 2 || val == 3) return true;

        for(int i = 2; i <= val/2; i++){
            if(val%i == 0) return false;
        }

        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> mp;

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            bool is_prime = check(it.second);

            if(is_prime) return true;
        }

        return false;
    }
};