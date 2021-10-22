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


    ListNode* scndlast(ListNode *head)
    {
        ListNode *p=head;
        while(p->next->next !=NULL)
            p=p->next;
        return p;
    }

    ListNode *rotonce(ListNode *head)
    {
        ListNode *tail=scndlast(head);
        ListNode *last=tail->next;
        last->next=head;
        tail->next=NULL;
        head=last;
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;

        int len=0;

        ListNode *p=head;

        while(p!=NULL)
        {
            p=p->next;
            len++;
        }
        k=k%len;
        for(int i=0;i<k;i++)
        {
            head=rotonce(head);
        }
        return head;
    }
};