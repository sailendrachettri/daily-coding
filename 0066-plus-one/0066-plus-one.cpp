class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int idx = digits.size()-1;
        vector<int> ans;

        while(idx >= 0){
            int sum = digits[idx] + carry;
            if(idx == digits.size()-1) sum++;

            ans.push_back(sum%10);
            carry = sum / 10;
            idx--;
        }

        if(carry){
            ans.push_back(1);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};