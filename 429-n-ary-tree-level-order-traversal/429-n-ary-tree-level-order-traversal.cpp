/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > res;
        
        if(root == NULL)
            return res;
        
        queue<Node*> q;
        q.push(root);
        
        while(q.size() != 0)
        {
            int n = q.size();
            vector<int> curr;
            
            for(int i = 0; i < n; i++)
            {
                auto front = q.front();
                q.pop();
                
                for(auto j : front->children)
                    q.push(j);
                
                curr.push_back(front->val);
            }
            
            res.push_back(curr);
        }
        
        return res;
    
    }
};