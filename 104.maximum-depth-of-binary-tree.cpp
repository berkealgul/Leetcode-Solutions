class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        int depth = 0;
        return d(root, depth);
    }   
    
    int d(TreeNode* root, int depth)
    {
        if(root)
        {
            depth++;
            return max(d(root->right, depth), d(root->left, depth));
        }
        else
            return depth;
                       
    }
};

