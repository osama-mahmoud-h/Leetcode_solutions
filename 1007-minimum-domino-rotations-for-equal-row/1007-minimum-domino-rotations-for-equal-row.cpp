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
                 cout<<"top: "<<tops[i]<<" , bottom: "<<bottoms[i]<<"\n";
                 cout<<"i: "<<i<<" , val: "<<val<<"\n";
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
       
        cout<<"min_top_flips: "<<min_top_flips<<"\n";
        cout<<"min_bottom_flips: "<<min_bottom_flips<<"\n";

        if(min_top_flips == -1 and min_bottom_flips == -1){
            return -1;
        }


        
        return (min_top_flips * min_bottom_flips ) > 0 ?
                min(min_top_flips, min_bottom_flips) :
                max(min_top_flips, min_bottom_flips);
    }
};