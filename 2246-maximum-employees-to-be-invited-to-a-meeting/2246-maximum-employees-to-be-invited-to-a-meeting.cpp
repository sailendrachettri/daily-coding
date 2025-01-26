class Solution {
public:
    int n;
    vector<int> deg, chain;
    bitset<100000> viz=0;

    void dfs(int i, int d, vector<int> &favorite){
        viz[i] = 1;
        chain[i] = d;
        int j = favorite[i];
        chain[j] = max(d+1, chain[j]);
        if(viz[j] == 0 && --deg[j] == 0)
            dfs(j, chain[j], favorite);
    }
    
    int maximumInvitations(vector<int>& favorite) {
        n = favorite.size()   ;
        deg.assign(n, 0);

        for(int x : favorite){
            deg[x]++;
        }

        chain.assign(n, 1);

        for(int i = 0; i < n; i++){
            if(!viz[i] && deg[i] == 0){
                dfs(i, 1, favorite);
            }
        }

        int maxCycle = 0, join2cycle = 0;

        for(int i = 0; i < n; i++){
            if(deg[i] == 0) continue;
            int cycleLen = 0;

            for(int j = i; deg[j] != 0; j = favorite[j]){
                deg[j] = 0;
                cycleLen++;
            }

            if(cycleLen > 2) maxCycle = max(maxCycle, cycleLen);
            else join2cycle += chain[i] + chain[favorite[i]];
        }

        return max(maxCycle, join2cycle);
    }
};