class Solution {
public:
    bool checkOverlap(int r, int xC, int yC, int x1, int y1, int x2, int y2) {
        int xP = max(x1 , min(xC, x2));
        int yP = max(y1 , min(yC, y2));

        int distX = xP - xC , distY = yP - yC;

        return (distX * distX + distY * distY) <= (r * r);
    }
};