class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int count = 0;

        for(int i = 0; i < tickets.size(); i++){
            q.push(i);
        }

        // while(!q.empty()){
        //     cout << q.front() << endl;
        //     q.pop();
        // }

        while(tickets[k] != 0){
            cout << q.front() << " ";
            int idx = q.front();
            tickets[idx]--;
            q.pop();

            if(tickets[idx] != 0)
                q.push(idx);

            count++;
        }

        return count;
    }
};