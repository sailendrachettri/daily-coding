class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
        vector<int> ans;
        string s= "123456789";

        for(int start = 0; start < s.size(); start++){
            for(int end = start; end < s.size(); end++){
                string temp = "";
                for(int i = start; i <= end; i++){
                    temp += s[i];
                }
                if(temp.size() > 1)
                    arr.push_back(stoi(temp));
            }
        }

        sort(arr.begin(), arr.end());

        for(int &val : arr){
            cout << val << " ";
        }

        for(int & val : arr){
            if(val >= low && val <= high)
                ans.push_back(val);
        }

        return ans;
    }
};