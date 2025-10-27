class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0, curr = 0;

        for(string st : bank){
            for(char ch : st){
                if(ch == '1')
                    curr++;
            }

            ans += (prev * curr);
            
            if(curr != 0){
                prev = curr;
            }

            curr = 0;
        }

        return ans;
    }
};