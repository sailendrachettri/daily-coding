class Solution {
public:
    int hammingWeight(int n) {
        bitset<64> binary(n);
        cout << binary << endl;
        int count = 0;

        cout << binary.size() << endl;
        cout << binary[5] << endl;

        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == 1)
                count++;
        }

        return count;
    }
};