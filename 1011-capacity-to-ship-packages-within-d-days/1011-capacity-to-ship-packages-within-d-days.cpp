class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int start = 0, end = 0;

        for(int &val : w){
            start = max(start, val);
            end += val;
        }

        while(start < end){
            int  mid = midpoint(start, end);

            cout << endl << start << " " << mid << " " << end << endl;

            int d = 1;
            int sum = 0;

            for(int &val : w){
                if(sum + val > mid){
                    d++;
                    sum = 0;
                }
                sum += val;
            }            

           if(d > days) start = mid + 1;
           else end = mid;
        }

        return start;
    }
};