class Solution {
public:
    string addBinary(string a, string b) {
        int a_size = a.size();
        int b_size = b.size();
        int diff = abs(a_size-b_size);
        int carry = 0;
        string ans = "";

        if(a_size < b_size){
            for(int i = 0; i < diff; i++){
                a.insert(a.begin(), '0');
            }
        }else if(b_size < a_size){
            for(int i = 0; i < diff; i++){
                b.insert(b.begin(), '0');
            }
        }

        for(char ch : a){
            cout << ch << " ";
        }cout << endl;
        
        for(char ch : b){
            cout << ch << " ";
        }
        cout << endl;

        for(int i = a.size()-1; i >= 0; i--){
            int sum = (a[i]-'0') + (b[i]-'0') + carry;
            ans += ((sum%2)+'0');
            cout << ans << endl;
            carry = sum / 2;
        }

        cout << "\ncarry " << carry << endl;

        if(carry == 1){
            ans.push_back('1');
        }

        reverse(ans.begin(), ans.end());


        return ans;
        
    }
};