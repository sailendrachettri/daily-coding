class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;

        for(string s : operations){
            if(!st.empty()){
                cout << st.top() << " ";
            }
            if(s == "+"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                st.push(val2);
                st.push(val1);
                st.push(val1+val2);

            }else if(s == "D") st.push(st.top()*2);
            else if(s == "C") st.pop();
            else st.push(stoi(s));
            
        }

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};