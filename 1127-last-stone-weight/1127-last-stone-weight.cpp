class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());

            int res = abs(stones[stones.size()-2] - stones[stones.size()-1]);
            stones.pop_back();
            stones.pop_back(); 

            if(res > 0)
                stones.push_back(res);
        }

        if(stones.empty()) return 0;

        return stones[0];
    }
};