class Solution 
{
public:
    Node* connect(Node* root) 
    {
        if(!root) {return root;}

        int count = 1;
        int limit = 1;
        queue<Node*> set;
        Node* node = root;
        
        set.push(root);
        
        while(!set.empty())
        {
            
            if(count == limit)
            {
                count = 0;
                limit *= 2;
                set.pop();
            }
            else
            {
                node = set.front();
                set.pop();
                node->next = set.front();
            }
            
            
            if(node->left)
            {
                set.push(node->left);
                set.push(node->right);
            }

            node = set.front();
            count++;
            
        }
        

        return root;
    }
};


