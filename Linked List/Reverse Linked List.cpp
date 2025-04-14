
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        if(head==nullptr)
        {
            return nullptr;
        }

        ListNode* first=nullptr;
        ListNode* second=head;
        ListNode* next;

        while(second!=nullptr)
        {
            next=second->next;
            second->next=first;
            first=second;
            second=next;
        }
return first;
    }
};
