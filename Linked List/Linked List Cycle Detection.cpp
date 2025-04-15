class Solution {
public:
    bool hasCycle(ListNode* head)
    {

        if(head==nullptr)
        {
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        
        while (fast != nullptr&&fast->next!=nullptr)
        {
         	fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
            {
                return true;
            }
        }
        
		return false;
    }
};
