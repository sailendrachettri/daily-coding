class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary(n);
        vector<int> arr;
        long long ans = 0;
        
        for(int i = binary.size()-1; i >= 0; i--){
            arr.push_back(binary[i]);
        }

        for(int i = 0; i < arr.size(); i++){
            ans += pow((arr[i]*2), i);
        }

        return ans-1;
    }
};