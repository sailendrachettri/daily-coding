class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "", t1 = "";

        for(char ch : s){
            if(ch == '#'){
                if(s1.size() > 0)
                    s1.pop_back();
            }
            else
                s1.push_back(ch);
        }
        
        for(char ch : t){
            if(ch == '#'){
                if(t1.size() > 0)
                    t1.pop_back();
            }
            else
                t1.push_back(ch);
        }
        
        cout << s1 << " " << t1 << endl;

        
        return s1 == t1;
                
    }
};