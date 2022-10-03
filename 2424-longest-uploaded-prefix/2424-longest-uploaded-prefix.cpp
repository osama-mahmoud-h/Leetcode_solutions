class LUPrefix {
public:
    vector<int>ar;
    int ptr;
    int N;
    LUPrefix(int n) {
       ar=vector<int>(n+2,-1);
        ptr=1;
        N=n+2;
    }
    
    void upload(int video) {
        if(video==ptr){
            ar[ptr++]=video;
        }
        else{
            ar[video]=video;
        }
        while(ptr<(N)&&ar[ptr]!=-1){ptr++;}
    }
    
    int longest() {
        return ptr-1;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */