class Solution {
public:
    vector<int> countBits(int n) {
        int count = 0;
        vector<int> ans;

        for(int i = 0; i <= n; i++){
            bitset<32> bi(i);

            for(int i = 0; i < bi.size(); i++){
                if(bi[i] == 1)
                    count++;
            }

            ans.push_back(count);
            count = 0;
        }

        return ans;
    }
};