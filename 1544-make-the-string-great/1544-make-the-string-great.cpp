class Solution {
public:
    string makeGood(string s) {
     
        string ans = "";                    // String for storing result
    for(auto i : s) {                    
        if(ans.size()!= 0) {
            char temp = ans.back();
            char check = i;
            if((temp-'a' == check-'A') ||(check - 'a' == temp - 'A')) {     // checking for adjacent element if 
                                                                            // such element is found then pop back last inserted
                                                                            // char from 'ans' else push_back the current char.
                ans.pop_back();
            } else {
                ans += i;
            }
        } else {
            ans += i;                   // if 'ans' string is empty then place the 
                                        // currently visiting character in the 'ans' string
        }
    }
    return ans;
    }
};