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
  ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    ListNode* p=head1;
    ListNode* q=head2;
    ListNode* h=NULL;
    ListNode* end=NULL;
    if(p==NULL && q==NULL)
      return NULL;
    else if(p==NULL)
      return q;
    else if(q==NULL)
      return p;
    while(p!=nullptr && q!=nullptr)
    {
      if(p->val==q->val)
      {
        ListNode* t1=p->next;
        ListNode* t2=q->next;
        if(h==nullptr)
        {
          h=p;
          p->next=q;
          end=q;
        }
        else
        {
          end->next=p;
          p->next=q;
          end=end->next->next;
        }
        p=t1;
        q=t2;
      }
      else if(p->val<q->val)
      {
        ListNode* t1=p->next;
        if(h==nullptr)
        {
          h=p;
          end=p;
        }
        else
        {
          end->next=p;
          end=end->next;
        }
        p=t1;
      }
      else if(p->val>q->val)
      {
        ListNode* t1=q->next;
        if(h==nullptr)
        {
          h=q;
          end=q;
        }
        else
        {
          end->next=q;
          end=end->next;
        }
        q=t1;
      }
    }
    if(p==NULL && q==NULL)
      end->next=NULL;
    else if(p==NULL)
      end->next=q;
    else if(q==NULL)
      end->next=p;
    return h;
  }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==1)
          return lists[0];
        else if(lists.size()==0)
          return NULL;
        else
        {
          for(int i=1;i<lists.size();i++)
          {
            lists[0]=mergeTwoLists(lists[0],lists[i]);
          }
        }
        return lists[0];
    }
};
