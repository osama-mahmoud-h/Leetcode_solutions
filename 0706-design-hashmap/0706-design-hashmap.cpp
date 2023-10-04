
class MyHashMap {
private:
    int size = 10;
    double loadFactor = 0.75;
    vector<list<pair<int,int>>>hMap;
    int curSize;
    int hash(int n){
        return n % this->size;
    }
    void resize(){
        size*=2;
        vector<list<pair<int,int>>>temp(this->size);
        for (const auto &chain: hMap){
            for (const auto &item: chain){
                int k = item.first;
                int val = item.second;
                temp[hash(k)].push_back({k,val});
            }
        }
        hMap = temp;
    }
    bool loadFactorExceeded(){
        return (double)this->curSize / this->size >= this->loadFactor;
    };
public:
    MyHashMap() {
        hMap.resize(size);
        curSize = 0;
    }

    void put(int key, int value) {
        if(loadFactorExceeded()){
            this->resize();
        }
        remove(key);
        hMap[hash(key)].push_back({key,value});
        curSize++;
    }

    int get(int key) {
        for (const auto &item: hMap[hash(key)]){
            if(item.first==key){
                return item.second;
            }
        }
        return -1;
    }

    void remove(int key) {
         int val = this->get(key);
        if(val!=-1){
            hMap[hash(key)].remove({key, val});
            this->curSize--;
        }
    }
};