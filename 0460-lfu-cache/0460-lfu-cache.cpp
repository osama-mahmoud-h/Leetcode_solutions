
class LFUCache {
private:
    unordered_map<int,int>hit_count;
    unordered_map<int,int> values;
    unordered_map<int,list<int>::iterator> addrs;
    map<int,list<int>> freqs;
    int min_freq , capacity, size;
public:
    LFUCache(int capacity) {
        min_freq = 1;
        this->capacity = capacity;
        size = 0;
    }

    int get(int key) {
        // note ! : get increase hit_count.
        if(values.find(key)==values.end())
            return -1;

      insert(key,values[key]);
       // cout<<"min_freq:"
        return values[key];
    }

    void put(int key, int value) {
     //   cout<<"put:"<<"\n";
         if(capacity<=0){return;}
        if(size < capacity){
            insert(key,value);
        }
        else{
            if(values.find(key)==values.end())
            evictKey(min_freq);
            insert(key,value);
        }
    }

    void insert(int key,int value){
      //  if(capacity<=0){return;}
        if(values.find(key)==values.end()){ // put key,val for first time
           values[key]=value;
         
      //  cout<<"val: "<<values[key]<<"\n";
            hit_count[key]++;
       // cout<<hit_count[key]<<"\n";
            freqs[ hit_count[key] ].push_front(key);
            addrs[key]=freqs[ hit_count[key] ].begin();
        // cout<<*addrs[key]<<"\n";
            min_freq = 1;
             size++;
        } 
        else{
            values[key]=value;
            hit_count[key]++;
            
            freqs[ hit_count[key]-1].erase(addrs[key]);
            
            freqs[ hit_count[key] ].push_front(key);
            
            addrs[key]=freqs[ hit_count[key]].begin();

            if(freqs[hit_count[key]-1].size()==0){
                freqs.erase(hit_count[key]-1);
               
            }
        }
         min_freq = freqs.begin()->first;
       
    }
    void evictKey(int mn_freq){
        auto item =--(freqs[mn_freq].end());
        int k = *item;
         //  cout<<"mn_freq: "<<mn_freq<<" , evctkey: "<<k<<" ,hit count: ";
          // cout<<hit_count[k]<<"\n";
      
      //  cout<<"here: \n";
        freqs[mn_freq].pop_back();//(item);//remove node from end of list (lru)
      
        hit_count.erase(k);
       
        values.erase(k);
       
        addrs.erase(k);
        size--;
        
        if(freqs[k].size()==0){
            freqs.erase(k);
        }

        if(freqs.size()==0){
            min_freq=1;
        } else{
            min_freq = freqs.begin()->first;
        }
      //  cout<<"here: \n";

      //  cout<<"end evict:\n";
    }

};
