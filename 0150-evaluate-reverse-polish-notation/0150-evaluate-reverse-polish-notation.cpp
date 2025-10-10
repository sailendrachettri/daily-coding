class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(string st : tokens){
            if(st == "+"){
                int val1 = stk.top();
                stk.pop();
                int val2 = stk.top();
                stk.pop();
                stk.push(val1+val2);
            }else if(st == "-"){
                int val1 = stk.top();
                stk.pop();
                int val2 = stk.top();
                stk.pop();
                stk.push(val2-val1);
            }else if(st == "*"){
                int val1 = stk.top();
                stk.pop();
                int val2 = stk.top();
                stk.pop();
                stk.push(val1*val2);
            }else if(st == "/"){
                int val1 = stk.top();
                stk.pop();
                int val2 = stk.top();
                stk.pop();
                stk.push(val2/val1);
            }else{
                stk.push(stoi(st));
            }
        }

        return stk.top();
    }
};