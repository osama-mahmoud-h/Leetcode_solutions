class LRUCache {
private:
    list<int>buffer;
    unordered_map<int,list<int>::iterator> key_addr;
    unordered_map<int,int>key_val;
    int size;
    int capacity;
    
    void  evict(){
        int key = buffer.back();
        buffer.pop_back();
        key_val.erase(key);
        key_addr.erase(key);
        size--;
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->size = 0;
    }

    int get(int key) {
        if(key_val.find(key) == key_val.end()){
            return -1;
        }
        int v = key_val[key];
        put(key,v);
        return v;
    }

    void put(int key, int value) {
        if(key_val.find(key) != key_val.end()){ //no evict needed
            buffer.erase(key_addr[key]);
        }else{
            if(size >= capacity){//evect key
                evict();
            }
            size++;
        }
        buffer.push_front(key);
        list<int>::iterator it = buffer.begin();
        key_val[key] = value;
        key_addr[key] = it;
    }
};