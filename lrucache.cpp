#include<iostream>
#include<unordered_map>

using namespace std;
class ListNode
{
    public:
        ListNode *next;
        ListNode *prev;
        int data;
        int key;
        ListNode(int k,int val){
            next=NULL;
            prev=NULL;
            data=val;
            key=k;
        }
};

class LRUCache
{
    private:
        ListNode *head;
        ListNode *tail;
        int remaining;
        int size;
        unordered_map<int,ListNode*>ht;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        remaining=cap;
        head= new ListNode(1000,-1);
        tail =new ListNode(-1000,-1);
        head->next=tail;
        tail->prev=head;
        size=cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(ht[key]==NULL)
            return -1;
        else
        {
            int data= ht[key]->data;
            del(ht[key]);
            append(key,data);
            return data;
        }

    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here
        if(ht[key]==NULL) //not already in table
        {
            if(remaining>0)
            {
               append(key,value);
            }
            else if(size==0)
                cout<<"cant insert,invalid size";
            else {
                pop();
                append(key,value);
            }
        }
        else // present in HT
        {
            // delete node,& then just append.
            del(ht[key]);
            append(key,value);
        }   
    }
    void append(int key,int value)
    {
        //cout<<remaining;
            ListNode *node=new ListNode(key,value);
            node->prev=tail->prev;
            node->next=tail;
            tail->prev->next=node;
            tail->prev=node;
            remaining--;
            ht[key]=node; 
    }
    void pop()
      {
                ListNode *todel=head->next;
                head->next=head->next->next;
                head->next->prev=head;
                int to=todel->key;
                ht[to]=NULL;
                remaining++;
                free(todel);
      } 
      void del(ListNode *node){
          node->prev->next=node->next;
          node->next->prev=node->prev;
          remaining++;
          free(node);
      }
      void printlist()
      {
          ListNode * temp=head;
          while(temp!=tail){
              cout<<temp->data<<"-->";
              temp=temp->next;
          }
      } 
};

int main()
{
    LRUCache *cache= new LRUCache(2);
    cache->set(1,1);
    cache->set(1,3);

    cache->set(2,5);
    cache->set(3,99);

    cache->get(2);

    cache->printlist();
    cout<<"HI";
}