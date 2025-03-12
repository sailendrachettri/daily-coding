class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0;
        int pos = 0;

        for(int num : nums)   {
            if(num != 0 && num <= -1)
                neg++;
            else if(num >= 1)
                pos++;
        }

        return max(neg, pos);
    }
};