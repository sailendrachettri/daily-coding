class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int idx = digits.size()-1;
        int sum = 1;

        do{
            cout << "inside " << endl;
            sum = (digits[idx]+carry);
            if(idx == digits.size()-1){
                sum++;
            }
            digits[idx] = sum%10;
            carry = sum / 10;
            idx--;

        }while(carry == 1 && idx >= 0);

        if(carry == 1){
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};