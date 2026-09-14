class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    long long width = max(0, std::min(rec1[2], rec2[2]) - std::max(rec1[0], rec2[0]));
    long long height = max(0, std::min(rec1[3], rec2[3]) - std::max(rec1[1], rec2[1]));
    
    return width * height > 0;
    }
};
