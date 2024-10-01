class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> rmap;

        for(int i = 0; i < arr.size(); i++){
            int rem = arr[i] % k;
            if(rem < 0) rem += k;

            rmap[rem]++;
        }

        for(auto &[rem, count] : rmap){
            if(rem == 0){
                if(count % 2 != 0) return false;

            } else {
                int cmp = k - rem;

                if(rmap[rem] != rmap[cmp]) return false;
            }
        }

        return true;
    }
};