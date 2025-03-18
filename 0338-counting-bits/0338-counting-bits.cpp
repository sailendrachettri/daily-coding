class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0; i <= n; i++){
            bitset<31> binary(i);
            int count = 0;

            for(int i = 0; i < binary.size(); i++){
                if(binary[i] == 1)
                    count += 1;
            }

            ans.push_back(count);
        }

        return ans;


    }
};