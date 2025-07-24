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
    void helper(vector<int> &ans, TreeNode *root){
        if(root == NULL) return;

        ans.push_back(root->val);
        helper(ans, root->left);
        helper(ans, root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> nums;
        int sum = 0;

        helper(nums, root);

        for(int val : nums){
            if(val >= low && val <= high)
                sum += val;
        }

        return sum;

    }
};