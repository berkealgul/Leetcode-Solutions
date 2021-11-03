class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> out;    
        vector<TreeNode*> roots;
        
        while(1)
        {
            if(roots.empty() && !root)
                break;
            
            if(root)
            {
                roots.push_back(root);
                root = root->left;
            }
            else
            {
                root = roots.back();
                out.push_back(root->val);
                root = root->right;
                roots.pop_back();
            }
        }
        
        return out;
    }
};

