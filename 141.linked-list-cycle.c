bool isValid(struct ListNode *node)
{
    if(node)
        if(node->next)
            if(node->next->next)
                return true;
    return false;
}

bool hasCycle(struct ListNode *head) 
{
    struct ListNode* hare = head; 
    struct ListNode* tortoise = head; 

    while(isValid(hare))
    {
        hare = hare->next->next;
        tortoise = tortoise->next;
        if(hare == tortoise)
            return true; 
    }    

    return false;
}
