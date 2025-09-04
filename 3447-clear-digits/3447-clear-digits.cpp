class Solution {
public:
    string clearDigits(string s) {
        string ans = "";
        for(char val : s){
            if(val >= '0' && val <= '9'){
                if(ans.size() != 0)
                    ans.pop_back();
            }else{
                ans.push_back(val);
            }
        }

        return ans;
    }
};