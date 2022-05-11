/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> order;

        if(!root)
            return order;
        
        vector<TreeNode*> nodes = {root};
        
        while(!nodes.empty())    
        {
            vector<int> level;
            vector<TreeNode*> child_nodes;

            for(auto n : nodes)
            {
                level.push_back(n->val);
                if(n->left) { child_nodes.push_back(n->left); }
                if(n->right) { child_nodes.push_back(n->right); }
            }
            
            order.push_back(level);
            nodes = child_nodes;
        }

        return order;
    }
};
// @lc code=end

