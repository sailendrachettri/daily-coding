class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m1 = 0;
        int m2 = 0;
        int ct1 = 0;
        int ct2 = 0;

        for(const int num : nums){
            if(num == m1) ct1++;
            else if(num == m2) ct2++;
            else if(ct1 == 0){
                m1 = num;
                ct1++;
            } else if(ct2 == 0){
                m2 = num;
                ct2++;
            } else {
                ct1--; ct2--;
            }
        }
        ct1 = 0;
        ct2 = 0;

        for(const int num : nums){
            if(num == m1) ct1++;
            else if(num == m2) ct2++;
        }

        vector<int> res;

        if(ct1 > nums.size()/3)
            res.push_back(m1);
        if(ct2 > nums.size()/3)
            res.push_back(m2);

        return res;
    }
};