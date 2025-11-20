class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            int val1 = stones.back();
            stones.pop_back();
            int val2 = stones.back();
            stones.pop_back();

            int res = abs(val1-val2);

            if(res > 0) stones.push_back(res);
        }

        if(stones.empty()) return 0;

        return stones.back();
    }
};