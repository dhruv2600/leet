/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    struct ListNode *temp=head;
    int result=0;
    int length=1;
    while(temp->next!=NULL)
    {
        length++;
        temp=temp->next;
    }
    temp=head;
    int i=length-1;
    while(temp!=NULL)
        {
            result = result + ((temp->val))*pow(2,i);
            temp=temp->next;
            i--;
        }
    return result ;

}
