

class Solution {
private:
bool is_number(string st){
    try{
        int val = stoi(st);
        return true;
        throw (st);
    } catch (...){
        return false;
    }
}
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        int ans = 0;

        for(int i = 0; i < op.size(); i++){
            if(is_number(op[i])){
                st.push(stoi(op[i]));
            }
            else if(op[i] == "+"){
                int top = st.top();
                st.pop();
                int new_score = top + st.top();
                st.push(top);
                st.push(new_score);
            } else if(op[i] == "D"){
                st.push(st.top()*2);
            } else if(op[i] == "C"){
                st.pop();
            }

            if(!st.empty())
                cout << op[i] << " " << st.top() << endl;
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};