class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){
            if(ch == '(' || ch == '[' || ch == '{')
                st.push(ch);
            else{
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                if(top == '(' && ch != ')' ||
                   top == '[' && ch != ']' ||
                   top == '{' && ch != '}'
                ) return false;
            }
        }

        if(st.empty()) return true;

        return false;
    }
};