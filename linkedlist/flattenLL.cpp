
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    if (l1->val <= l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

void helper(Node *root,Node* dummy)
{
    dummy=mergeTwoLists(root->bottom,dummy);
    helper(root->next);
}

Node *flatten(Node *root)
{
    ListNode*dummy=(ListNode *)malloc(sizeof(ListNode));
    helper(root,dummy);
    mergeTwoLists(root,dummy);
   // Your code here
}