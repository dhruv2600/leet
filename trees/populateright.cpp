/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {


        queue<Node*>q;
        queue<Node*>buffer;
        //q.push(NULL);
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            if(q.front()==NULL)
            {
               while(!buffer.empty())
               {
                    Node *temp=buffer.front();
                    buffer.pop();
                    if(!buffer.empty())
                        temp->next=buffer.front();
                    else
                        temp->next=NULL;
               }
               q.pop();
               q.push(NULL);
               if(q.front()==NULL)
                    break;
            }
            else
            {
                Node *temp=q.front();
                cout<<temp->val<<endl;
                q.pop();
                buffer.push(temp);
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                    cout<<"ADDED";
                }
                if(temp->right !=NULL)
                {
                    cout<<"ADHHED";
                    q.push(temp->right);
                }
            }
        }
        return root;
        
    }
};