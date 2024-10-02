class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> ans;
        int count = 0;

        for(string email : emails){
            int i = 0;
            string local = "";
            string domain = "";

            while(email[i] != '@' && email[i] != '+'){
                if(email[i] != '.')
                    local += email[i];
                i++;
            }

            while(email[i] != '@'){
                i += 1;
            }

            for(int start = i; i < email.size(); i++){
                domain += email[start];
            }

            string temp = local + domain;
            ans.insert(temp);
        }

        for(int i = 0; i < ans.size(); i++){
            count++;
        }

        return count;
        
    }
};