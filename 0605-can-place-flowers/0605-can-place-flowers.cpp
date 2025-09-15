class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
       if(n == 0)  return true;

       f.insert(f.begin(), 0);
       f.push_back(0);

        for(int i = 2; i < f.size(); i++){
            if(f[i-2] == 0 && f[i-1] == 0 && f[i] == 0){
                f[i-1] = 1;
                n--;
            }
        }
       

        return n <= 0;
    }
};