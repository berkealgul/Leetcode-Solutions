class Solution 
{
public:
    int m = 0;

    int diameter(TreeNode* root)
    {
        if(root)
        {
            int l = diameter(root->left);
            int r = diameter(root->right);

            m = max(m, l+r);

            return max(l, r) + 1;
        }
        else
            return 0;
    }

    int diameterOfBinaryTree(TreeNode* root) 
    {
        diameter(root);
        return m;
    }
};
