class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int sum1 = coordinate1[0]+(coordinate1[1]-'0');
        int sum2 = coordinate2[0]+(coordinate2[1]-'0');

        if(sum1%2 == 0 && sum2%2 == 0) return true;
        if(sum1%2 != 0 && sum2%2 != 0) return true;

        return false;
    }
};