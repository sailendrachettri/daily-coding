class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;

        for(int num : nums)
            if(num == 0)
                count_0++;
            else if(num == 1)
                count_1++;
            else 
                count_2++;
        
        nums.clear();

        while(count_0--)
            nums.push_back(0);
        while(count_1--)
            nums.push_back(1);
        while(count_2--)
            nums.push_back(2);

    }
};