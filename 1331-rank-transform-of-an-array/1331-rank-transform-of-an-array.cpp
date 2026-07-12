class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        int idx = 1;

        for(int val : arr)
            mp[val]++;

        for(auto &it : mp)
            it.second = idx++;

        for(int &val : arr){
            auto it = mp.find(val);

            if(it != mp.end()){
                val = it->second;
            }
        }

        return arr;
    }
};