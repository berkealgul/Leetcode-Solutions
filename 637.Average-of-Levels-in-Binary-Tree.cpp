class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> nodes;
        vector<double> avarages;

        nodes.push(root);

        while(!nodes.empty())
        {
            double size = nodes.size();
            double sum = 0;

            for(int i = 0; i < size; i++) 
            {
                TreeNode *n = nodes.front();
                sum += n->val;
                nodes.pop();
                if(n->left) { nodes.push(n->left); }
                if(n->right) { nodes.push(n->right); }
            }

            avarages.push_back(sum / size);
        }

        return avarages;
    }
};