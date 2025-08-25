class Solution {
public:
    int hammingWeight(int n) {
        int count  = 0;
        bitset<32> binary(n);

        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == 1)
                count++;
        }

        return count;
    }
};