class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> bi(n);
        int count = 0;

        for(int i = 0; i < bi.size(); i++){
            if(bi[i] == 1)
                count++;
        }

        return count;
    }
};