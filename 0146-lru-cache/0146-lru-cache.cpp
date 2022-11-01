class LRUCache {
public:
    class node{
        public:
        int key;
        int val;
        node * prev;
        node * next;
        node(int _key, int _val){
            key=_key;
            val=_val;
        }
    };
    
    node * head = new node(-1,-1);
    node * tail = new node(-1,-1);
    int cap;
    unordered_map<int,node*> mp;
    
    void addnode(node * newnode){
        node * temp = head->next;
        head->next = newnode;
        newnode->prev=head;
        newnode->next = temp;
        temp->prev= newnode;
    }
    
    void deletenode(node * delnode){
        node * delprev = delnode->prev;
        node * delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev= delprev;
    }
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev= head;
        
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            node * resNode = mp[key];
            int val = resNode->val;
            mp.erase(key);
            deletenode(resNode);
            
            addnode(resNode);
            mp[key]=head->next;
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            node * existingNode = mp[key];
            deletenode(existingNode);
            mp.erase(key);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        
        addnode(new node(key, value));
        mp[key]= head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */