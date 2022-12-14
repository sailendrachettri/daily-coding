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
    
    bool isSymmetricHelp(TreeNode *left, TreeNode *right)
    {
        if(left == NULL or right == NULL)
            return left==right;
        
        if(left->val != right->val)
            return false;
        
        return isSymmetricHelp(left->left, right->right) and isSymmetricHelp(left->right, right->left);
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        
        return root==NULL or isSymmetricHelp(root->left, root->right);
    }
};