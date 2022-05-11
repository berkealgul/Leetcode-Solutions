class Solution 
{
public:
    int minDepth(TreeNode* root) 
    {
        if(!root)
            return 0;
        
        int d_l = minDepth(root->left);
        int d_r = minDepth(root->right);

        if(d_l == 0)
            return ++d_r;
        else if(d_r == 0)
            return ++d_l;
        else
            return min(d_l, d_r)+1;

    }
};
