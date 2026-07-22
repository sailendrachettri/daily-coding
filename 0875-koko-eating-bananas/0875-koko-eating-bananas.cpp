class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int left = 1, right = *max_element(p.begin(), p.end());

        while(left < right){
            int ans = midpoint(left, right);
            int hr = 0;

            for(int & val : p){
                hr += (int)ceil((double)val/ans);
            }

            if(hr <= h)
                right = ans;
            else left = ans + 1;
        }

        return left;
    }
};