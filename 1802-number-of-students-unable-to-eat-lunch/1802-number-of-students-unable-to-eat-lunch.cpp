class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count_1 = 0, count_0 = 0;

        for(int val : students){
            if(val == 0)
                count_0++;
            else count_1++;
        }


        for(int i = 0; i < sandwiches.size(); i++){
            if(sandwiches[i] == 0){
                if(count_0 == 0) return sandwiches.size()-i;
                count_0--;
            }else{
                if(count_1 == 0) return sandwiches.size()-i;
                count_1--;
            }

        }

        return 0;
    }
};