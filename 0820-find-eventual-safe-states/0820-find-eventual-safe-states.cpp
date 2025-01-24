class Solution {
public:
    int n;
    char safe[10000];

    bool dfs(int i, vector<vector<int>> &graph){
        if(safe[i] != -1) return safe[i];
        safe[i] = 0;

        for(int j : graph[i]){
            if(!dfs(j, graph))
                return safe[i] = 0;
        }

        return safe[i] = 1;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        n = graph.size();
        memset(safe, -1, n);
        vector<int> ans;

        for(int i = 0; i < n; i++){
            if(dfs(i, graph))
                ans.push_back(i);
        }

        return ans;
    }
};