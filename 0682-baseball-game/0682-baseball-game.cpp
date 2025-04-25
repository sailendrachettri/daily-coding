class Solution {
public:
    bool isnumber(string s){
        try{
            int val = stoi(s);
            return true;
            throw s;
        }catch(...){
            return false;
        }
    }
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans = 0;

        for(string s : operations){
            if(isnumber(s)){
                st.push(stoi(s));
            }else if(s == "+"){
                int val = st.top();
                st.pop();
                int tot = st.top()+val;
                st.push(val);
                st.push(tot);
            }else if(s == "D"){
                st.push(st.top()*2);
            }else{
                st.pop();
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};