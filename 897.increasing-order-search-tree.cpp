// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem897.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=897 lang=cpp
 *
 * [897] Increasing Order Search Tree
 */

// @lc code=start
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
class Solution 
{
public:
    TreeNode* increasingBST(TreeNode* root) 
    {
        if(root)
        {
            auto parent = increasingBST(root->left);
            auto child = increasingBST(root->right);
            return increasingBST(root->right);
        }
        else
            return 0;
    }

    TreeNode* increasingBST(TreeNode* node, TreeNode* parent) 
    {
        if(root)
        {
            auto parent = increasingBST(node->left);
            auto child = increasingBST(node->right);
            child->right = parent;
            return increasingBST(node->right);
        }
        else
            return 0;
    }
};
// @lc code=end

