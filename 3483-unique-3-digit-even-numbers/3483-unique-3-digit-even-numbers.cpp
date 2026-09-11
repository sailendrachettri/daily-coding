class Solution {
public:
    int totalNumbers(vector<int>& d) {
        set<int> st;
        int ans = 0;

        for(int i = 0; i < d.size(); i++){
            for(int j = 0; j < d.size(); j++){
                for(int k = 0; k < d.size(); k++){
                    if((i != j && i != k && j != k)||
                    (d[i] != d[j] && d[i] != d[j] && d[j] != d[k] && d[i] != d[k])
                    ){
                        string str = "";
                        str += d[i]+'0';
                        str += d[j] + '0';
                        str += d[k] + '0';
                        int val = stoi(str); 
                        // cout << val << endl;

                        if(val%2 == 0 && str.size() == 3 && str[0] != '0'){
                            cout << val << endl;
                            st.insert(val);
                        }
                    }
                }
            }
        }

        return st.size();
    }
};