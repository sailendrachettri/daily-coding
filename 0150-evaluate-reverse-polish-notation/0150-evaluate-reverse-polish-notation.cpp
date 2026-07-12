class Solution {
public:
    bool isInt(string s){
        try{
            stoi(s);
        }catch(exception e){
            return false;
        }

        return true;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int sum = 0;

        for(string &s : tokens){
            if(!st.empty())
                cout << st.top() << " ";
            if(isInt(s)){
                st.push(stoi(s));
            }else if(s == "+"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val1+val2);
            }else if(s == "-"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2 - val1);
            }else if(s == "*"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val1 * val2);
            }else if(s == "/"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2 / val1);
            }
        }

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};