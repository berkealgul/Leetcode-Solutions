/*
 * @lc app=leetcode id=226 lang=c
 *
 * [226] Invert Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root)
{
    if(root)
    {
        struct TreeNode* tem = root->left;
        root->left = root->right;
        root->right = tem;

        invertTree(root->left);
        invertTree(root->right);
    }
    
    return root;
}
// @lc code=end

