class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string s : tokens){
            if(s == "+"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2+val1);
            }
            else if(s == "-"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2-val1);
            }
            else if(s == "/"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2/val1);
            }
            else if(s == "*"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2*val1);
            }else{
                int val = stoi(s);
                st.push(val);
            }
        }

        return st.top();
    }
};