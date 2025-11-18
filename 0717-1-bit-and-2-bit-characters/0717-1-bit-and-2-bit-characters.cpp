class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size() == 1) return bits[0] == 0;

        for(int i = 0; i < bits.size();){
            cout << i << " ";
            if(i == bits.size()-2 && bits[i] == 1) return false;
            if(bits[i] == 1) i+=2;

            else i++;
        }

        return true;
    }
};