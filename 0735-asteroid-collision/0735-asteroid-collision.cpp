class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        vector<int> arr;

        for(int &val : as){
            while(!arr.empty() && val < 0 && arr.back() > 0){
                int diff = val + arr.back();

                if(diff < 0){
                    arr.pop_back();
                }else if(diff > 0){
                    val = 0;
                }else {
                    val = 0;
                    arr.pop_back();
                }
            }

            if(val != 0) arr.push_back(val);
        }

        return arr;
    }
};