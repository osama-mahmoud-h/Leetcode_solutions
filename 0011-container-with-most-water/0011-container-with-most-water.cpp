class Solution {
public:

int calcArea(int i,int j,int h1,int h2){
    return abs(j-i)*(min(h1,h2));
}
int maxArea(vector<int>& height) {
    int n=height.size() , j=n-1,i=0;
    int ans = 0;
    while(j>i){
        ans = max(ans, calcArea(i,j,height[i],height[j]));
        if(height[j]<height[i]){
            j--;
        } else{
            i++;
        }
    }
    
    return ans;
}


};