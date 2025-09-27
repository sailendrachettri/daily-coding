class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);

        for(int i = 1; i < flowerbed.size()-1; i++){
            if(flowerbed[i-1] != 1 && flowerbed[i] != 1 && flowerbed[i+1] != 1){
                n--;
                flowerbed[i] = 1;
            }
        }

        return n <= 0;
    }
};