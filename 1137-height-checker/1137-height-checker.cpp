class Solution {
public:
    int heightChecker(vector<int>& h1) {
        vector<int> h2 = h1;
        int count = 0;

        sort(h2.begin(), h2.end());

        for(int i = 0; i < h1.size(); i++){
            if(h1[i] != h2[i])
                count++;
        }

        return count;
    }
};