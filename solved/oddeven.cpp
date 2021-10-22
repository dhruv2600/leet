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
    ListNode* oddEvenList(ListNode* head) {
      if(head==NULL || head->next==NULL)
          return head;
      ListNode* even=head;
      ListNode *head2=NULL;
      ListNode *endptr=NULL;
      ListNode *odd;
      while(even != NULL )
      {
        odd=even->next;
        if(odd !=NULL)
        {
          if(head2 ==NULL)
          {
            head2 =odd;
            endptr=odd;
          }
          else
          {
            endptr->next =odd;
            endptr=endptr->next;
          }
          even->next=odd->next;
          even=even->next;
        }
        else if(odd==NULL)
        {
          break;
        }

      }
      endptr->next =NULL;
      endptr=head;
      while(endptr->next!=NULL)
        endptr=endptr->next;
      endptr->next=head2;
      return head;
    }
};
