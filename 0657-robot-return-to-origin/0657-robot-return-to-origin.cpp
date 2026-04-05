class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
     for (const char &move : moves){
              if (move == 'U') y--;
            else if (move == 'D') y++;
            else if (move == 'L') x--;
            else  x++;
        }
        return x==0&&y==0;
    }
};