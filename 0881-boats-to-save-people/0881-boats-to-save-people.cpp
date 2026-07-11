class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        sort(p.begin(), p.end());
        int ans = 0;

        int left = 0, right = p.size()-1;

        while(left <= right){

            if(left == right){
                ans++; return ans;
            }

            int sum = p[left] + p[right];

            if(sum <= l){
                ans++;
                right--; left++;
            }else {
                right--; ans++;
            }
        }

        return ans;
    }
};