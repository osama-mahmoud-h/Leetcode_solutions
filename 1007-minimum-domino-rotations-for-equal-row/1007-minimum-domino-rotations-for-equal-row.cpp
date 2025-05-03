class Solution {
private:
     int min_flips(vector<int>& tops, vector<int>& bottoms, int val){
        int min = 0;
         for (int i = 0; i < tops.size(); ++i) {
             if(tops[i] == val){
                 continue;
             }else if(bottoms[i] == val){
                 min++;
             }else{
                 return -1;
             }
         }
        return min;
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int first_top = tops[0], first_bottom = bottoms[0];
        
        int min_top_flips = min_flips(tops, bottoms, first_top);
        int min_bottom_flips = min_flips(bottoms,tops ,first_top);

        vector<int>ans = {
            min_flips(tops, bottoms, first_top),
            min_flips(bottoms,tops ,first_top),
            min_flips(tops, bottoms, first_bottom),
            min_flips(bottoms,tops ,first_bottom)
        };
       
        //cout<<"min_top_flips: "<<min_top_flips<<"\n";
       // cout<<"min_bottom_flips: "<<min_bottom_flips<<"\n";

        if(ans[0]==-1 and ans[1]==-1 and ans[2]==-1 and ans[3]==-1){
            return -1;
        }

        int res = INT_MAX;
        for (auto const &i: ans){
            if(i==-1)
                continue;
                res = min(res,i);
        }
        
        return res;
    }
};