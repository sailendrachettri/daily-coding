class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> num;
        string ans = "";

        for(int i = 0; i < s.size(); i++){
            
            string n = "";

            while(s[i] >= '0' && s[i] <= '9'){
                n += s[i];
                i++;
            }

            if(n.size() > 0)
                num.push(stoi(n));

            if(s[i] >= 'a' && s[i] <= 'z' || s[i] == '['){
                string temp = "";
                temp += s[i];
                st.push(temp);
            }else if(s[i] == ']'){
                string str = "";
                string temp = "";

                while(!st.empty() && st.top() != "["){
                    str += st.top();
                    st.pop();
                }
                st.pop();

                for(int i = 0; i < num.top(); i++){
                    temp += str;
                }

                cout << "temp : " << temp << endl;

                st.push(temp);
                num.pop();
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    } 
};