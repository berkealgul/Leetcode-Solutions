class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root)    
    {
        vector<int> out;    
        vector<TreeNode*> roots;
        
        while(1)
        {
            if(roots.empty() && !root)
                break;
            
            if(root)
            {
                out.push_back(root->val);
                roots.push_back(root->right);
                root = root->left;
            }
            else
            {
                root = roots.back();
                roots.pop_back();
            }
        }
        
        return out;
    }
};