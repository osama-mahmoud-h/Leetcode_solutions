class FrequencyTracker {
private:
    unordered_map<int,int>map;
    unordered_map<int,int>freq;
public:
    FrequencyTracker() {
    }

    void add(int n) {
        if(map.find(n) != map.end()){ //already exists
            freq[map[n]]--;
            
        }
        map[n]++;
       freq[map[n]]++;
    }

    void deleteOne(int n) {
        if(map.find(n) == map.end()){ //not in found
            return;
        }
        
        freq[map[n]]--;
        map[n]--;
        
        
        if(map[n]<=0){
            map.erase(n);
        }else{
            freq[map[n]]++;
        }
      
    }

    bool hasFrequency(int frequency) {
        return freq.find(frequency) != freq.end() && freq[frequency]>0;
    }
};