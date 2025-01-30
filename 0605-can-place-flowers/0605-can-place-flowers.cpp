class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        fb.push_back(0);

        for(int i = fb.size()-1; i > 0; i--){
            fb[i] = fb[i-1];
        }

        fb[0] = 0;
        fb.push_back(0);

        for(int i = 1; i < fb.size()-1; i++){
            if(n < 1) return true;

            if(fb[i-1] == 0 && fb[i] == 0 && fb[i+1] == 0) {
                fb[i] = 1;
                n--;
            }
        }

        if(n == 0) return true;

        return false;
    }
};