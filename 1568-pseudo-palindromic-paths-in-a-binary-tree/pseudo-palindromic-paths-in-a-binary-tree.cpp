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
public:
    int ans = 0;
    void dfs(TreeNode* node, unsigned parity){
        if(!node) return;

        int x = node->val;
        parity ^= (1 << x);

        if(!node->left && !node->right){
            if(__builtin_popcount(parity) <= 1) ans++;
            return;
        }

        dfs(node->left, parity);
        dfs(node->right, parity);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        unsigned parity = 0;
        dfs(root, parity);
        return ans;
    }
};