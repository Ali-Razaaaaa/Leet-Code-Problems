/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode dummy;
        ListNode* ptr = &dummy;

        while(list1!=nullptr&&list2!=nullptr)
        {
            
            if(list1->val==list2->val)
            {
                ptr->next = new ListNode(list1->val);
                ptr=ptr->next;
                ptr->next = new ListNode(list2->val);
                ptr=ptr->next;
                list1=list1->next;
                list2=list2->next;
            }
            else if(list1->val < list2->val)
            {
                ptr->next= new ListNode(list1->val);
                ptr=ptr->next;
                list1=list1->next;
            }
            else
            {
                ptr->next = new ListNode(list2->val);
                ptr=ptr->next;
                list2=list2->next;
            }
            
        }
        while(list1!=nullptr)
        {
            ptr->next= new ListNode(list1->val);
            list1=list1->next;
            ptr=ptr->next;
        }
        while(list2!=nullptr)
        {
            ptr->next= new ListNode(list2->val);
            list2=list2->next;
            ptr=ptr->next;
        }
        return dummy.next;
    }
};