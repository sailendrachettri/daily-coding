class Solution {
public:
    bool isValid(string s) {
     
        int size = s.size();
        
        stack<char> brackets;
        
        for(int i = 0; i < size; i++)
        {
            if(s[i] == '(' or s[i] == '[' or s[i] == '{')
                brackets.push(s[i]);
            
            else
            {
                if(brackets.empty() )
                    return false;
                
                char ch = brackets.top();
                brackets.pop();
                
                if( (s[i] == ')' and ch == '(' ) or (s[i] == ']' and ch == '[' ) or (s[i] == '}' and ch == '{') )
                    continue;
                
                else 
                    return false;
            }
        }
        
        
        cout << brackets.size() << endl;
        
        if(brackets.empty() )
            return true;
        
        return false;
        
    }
};