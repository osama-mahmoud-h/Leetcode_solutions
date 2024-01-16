class RandomizedSet {
private:
    unordered_map<int,int>map;
    vector<int>arr;
    int n;
    int idx;
    int getRandomIdx(){
        return rand()%n;
    }
    void swap(int i,int j){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    void remove_element(int val){
        int i = map[val];
        swap(i,n-1);
        map[arr[i]] = i;
        map.erase(val);
        arr.pop_back();
        n--;
    }
public:
    RandomizedSet() {
        n = 0;
        idx = 0;
    }

    bool insert(int val) {
        if(map.find(val)!=map.end()){
            return false;
        }
        arr.push_back(val);
        map[val] = n;
        n++;
        return true;
    }

    bool remove(int val) {
        if(map.find(val)==map.end()){
            return false;
        }
        remove_element(val);
        return true;
    }

    int getRandom() {
        if(n==0){
            return -1;
        }
        int i = getRandomIdx();
        return arr[i];
    }
};