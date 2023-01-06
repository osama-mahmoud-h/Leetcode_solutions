class Solution {
public:
   bool squreSum(vector<vector<int>>& mat,int side,int threshold){
       if(side ==0)return  0;
    int rows = mat.size();
    int cols = mat[0].size();
   //  cout<<"rows: "<<rows-side+1 <<"\n";
    for (int i = 0; i <rows-side+1 ; ++i) {
        for (int j = 0; j < cols-side+1; ++j) {
            
            int sum = mat[i+side-1][j+side-1];
          //cout<<"sum: "<<sum<<"\n";
            if(j>0&&i>0){
                sum-= (mat[i+side-1][j-1]-mat[i-1][j-1]);
            }else if(j>0){
                 sum-= (mat[i+side-1][j-1]); 
            }
            if(i>0){
               sum-= mat[i-1][j+side-1];
            }
            if(sum<=threshold){
                return 1;
            }

        }
    }

    return 0;
}

int maxSideLength(vector<vector<int>>& mat, int threshold) {

    int rows = mat.size();
    int cols = mat[0].size();
    
    //cout<<"rs:"<<rows<<" , cols:"<<cols<<"\n";
    int  mx = min(cols,rows);

    //prfix sum for rows
    for (int i = 0; i <rows ; ++i) {
        for (int j = 1; j < cols; ++j) {
            mat[i][j]+=mat[i][j-1];
        }
    }
    //prefix sum for colums
    for (int i = 0; i <cols ; ++i) {
        for (int j = 1; j < rows; ++j) {
            mat[j][i]+=mat[j-1][i];
        }
    } 
    
    //     for (int i = 0; i <rows ; ++i) {
    //     for (int j = 0; j < cols; ++j) {
    //       cout<<mat[i][j]<<"     ";
    //     }
    //         cout<<"\n";
    // }    
   // cout<<"issqure: "<<squreSum(mat,1,threshold)<<"\n";
               
    int l = 0, h = mx, ans = 0;
    while (l<=h){
        int mid = (l+h)/2;
       // cout<<"mid:"<<mid<<"\n";
        if(squreSum(mat,mid,threshold)){
            ans=mid;
            l=mid+1;
        }else{
            h= mid-1;
        }
    }

    return ans;
}
};