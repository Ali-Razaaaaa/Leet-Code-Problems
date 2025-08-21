class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;

        ListNode* slowptr = head;
        ListNode* fastptr = head->next;

        while(fastptr && fastptr->next) {
            if(slowptr == fastptr) return true;

            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }

        return false;
    }
};
