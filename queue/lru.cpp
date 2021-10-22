class LRUCache {
public:
    int capacity;
    deque<pair<int,int>>q;
    LRUCache(int capacity) {
        capacity=capacity;
    }
    
    int get(int key) {
         for(auto it=q.begin();it!=q.end();it++)
        {
            if(*it.first==key)
                found=1;
        }
        if(found)
            return *it.second;
        return -1;
    }
    
    void put(int key, int value) {
        bool found=0;
        for(auto it=q.begin();it!=q.end();it++)
        {
            if(*it.first==key)
                found=1;
        }
        if(found)
        {
            pair<int,int>tmp=make_pair(*it.first,value);
            q.erase(it);
            q.push_back(tmp);
        }
        else
        {
            pair<int,int>tmp=make_pair(key,value);
            q.pop_front();
            q.push_back(tmp);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */