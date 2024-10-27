class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOfZeros = 0;
        int countOfOnes = 0;
        int countOfTwos = 0;

        int size = nums.size();

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0)
                countOfZeros++;
            else if(nums[i] == 1)
                countOfOnes++;
            else 
                countOfTwos++;
        }

        for(int i = 0; i < size;){
            while(countOfZeros > 0){
                nums[i++] = 0;
                countOfZeros--;
            }
            while(countOfOnes > 0){
                nums[i++] = 1;
                countOfOnes--;
            }
            while(countOfTwos > 0){
                nums[i++] = 2;
                countOfTwos--;
            }
        }
    }
};