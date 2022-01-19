class Solution 
{
public:
    bool isSymmetric(TreeNode* root) 
    {
        return _isSymmetric(root->left, root->right);
    }
    
    bool _isSymmetric(TreeNode* n1, TreeNode* n2)
    {
        if(n1 && n2)
            return _isSymmetric(n1->left, n2->right) && _isSymmetric(n1->right, n2->left) && (n2->val==n1->val);
        else if(!n2 && !n1)
            return true;
        else
            return false;   
    }
};

