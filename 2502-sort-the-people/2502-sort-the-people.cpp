class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<int, string> sort;
        int i = 0;

        for(int height : heights)
            sort[height] = names[i++];
        
        for(auto it : sort)
            ans.push_back(it.second);
        
        reverse(begin(ans), end(ans));
        return ans;
    }
};