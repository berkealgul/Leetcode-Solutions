class Solution 
{
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
        if(root1 && root2)
        {
            root1->val += root2->val;
            root1->left = mergeTrees(root1->left, root2->left);
            root1->right = mergeTrees(root1->right, root2->right);
            return root1;
        }
        else
            return root1 ? root1 : root2;
    }

    /*
    my first bad solution
        TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
        {
            if(root1 && root2)
            {
                root1->val += root2->val;
                root1->left = mergeTrees(root1->left, root2->left);
                root1->right = mergeTrees(root1->right, root2->right);
                return root1;
            }
            else if(root1 && !root2)
            {
                root1->left = mergeTrees(root1->left, nullptr);
                root1->right = mergeTrees(root1->right, nullptr);
                return root1;
            }
            else if(!root1 && root2)
            {
                root1 = root2;
                root1->left = mergeTrees(nullptr, root2->left);
                root1->right = mergeTrees(nullptr, root2->right);
                return root1;
            }
            else
                return nullptr;
        }
    */
};

