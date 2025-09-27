class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        vector<int> bed;
        
        bed.push_back(0);

        for(int val : fb)
            bed.push_back(val);
        
        bed.push_back(0);

        for(int i = 1; i < bed.size()-1; i++){
            if(bed[i-1] != 1 && bed[i] != 1 && bed[i+1] != 1){
                bed[i] = 1;
                n--;
            }
        }

        if(n <= 0) return true;

        return false;

    }
};