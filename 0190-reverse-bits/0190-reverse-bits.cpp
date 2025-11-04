class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary(n);
        long long ans = 0;
        int idx = binary.size()-1;
        
        for(int i = 0; i < binary.size(); i++){
            ans += pow((binary[i]*2), idx--);
        }

        return ans-1;
    }
};