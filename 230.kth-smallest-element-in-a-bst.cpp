class Solution 
{
public:
    vector<int> vals;

    int kthSmallest(TreeNode* root, int k)
    {
        kthSmallest(root);
        return vals[k-1];
    }

    void kthSmallest(TreeNode* node)
    {
        if(node)
        {    
            kthSmallest(node->left);
            vals.push_back(node->val);
            kthSmallest(node->right);
        }
    }
};
