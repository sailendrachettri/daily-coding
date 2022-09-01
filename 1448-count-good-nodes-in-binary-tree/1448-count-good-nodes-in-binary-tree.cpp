/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    void recur(TreeNode *root, int &count, int maxTillNow)
    {
        if(!root)
            return;
        
        if(root->val >= maxTillNow)
            count++;
        
        maxTillNow = max(root->val, maxTillNow);
        
        recur(root->left, count, maxTillNow);
        recur(root->right, count, maxTillNow);
    }
    
public:
    int goodNodes(TreeNode* root) {
        
        int count = 0;
        
        recur(root, count, root->val);
        
        return count;
        
    }
};