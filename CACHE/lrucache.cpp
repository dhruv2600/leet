
class ListNode{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val=-1;
    }

};




class LRUCache {
public:




    int remaining;
    ListNode *head;
    ListNode *tail;
    unordered_map<int,ListNode *>ht;
    LRUCache(int capacity) {
        remaining=capacity;
        head=new ListNode();
        tail=new ListNode();
        head->next=tail;
        head->prev=NULL;
        tail->prev=head;
        tail->next=NULL;
    }
    
    int get(int key) {
        if(ht.find(key)!=ht.end())
        {
            ListNode *tmp=ht[key];
            tmp->next->prev=tmp->prev;
            tmp->prev->next=tmp->next;
            free(tmp);
            ListNode *n=new ListNode();
            n->data=key;
            n->prev=head;
            n->next=head->next;
            head->next->prev=n;
            head->next=n;
            ht[key]=n;
        }
        
    }
    
    void put(int key, int value) {
        if(remaining==0)
        {

        }
        else
        {

        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */