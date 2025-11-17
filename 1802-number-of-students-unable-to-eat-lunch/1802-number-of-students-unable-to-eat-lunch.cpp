class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int arr[2] = {0};

        for(int val : students){
            arr[val]++;
        }

        for(int i = 0; i < sandwiches.size(); i++){
            int val = sandwiches[i];

            if(arr[val] == 0) return sandwiches.size()-i;

            arr[val]--;
        }

        return 0;
    }
};