class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;

        for(int i = 0; i < candies.size(); i++){
            int total = candies[i] + extraCandies;
            bool great = true;

            for(int j = 0; j < candies.size(); j++){
                if(i != j && total < candies[j]){
                    great = false;
                    break;
                }
            }

            ans.push_back(great);
        }

        return ans;
    }
};