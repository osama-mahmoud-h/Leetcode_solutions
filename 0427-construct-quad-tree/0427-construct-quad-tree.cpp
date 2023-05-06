class Solution {
private:
    bool allones(int w,int x,int y,int z){
        return w&x&y&z;
    }
    bool allzeros(int w,int x,int y,int z){
        return (w&x&y&z)==0 && (w|x|y|z)==0;
    }

    Node * helper(vector<vector<int>>&ar,int r1,int c1,int r2,int c2,int len){
       int n = ar.size();
     //  cout<<r1<<" , "<<c1<<" , "<<r2<<" , "<<c2<<"\n";
        if(r2>=n||c2>=n)return nullptr;
            
        if(len==1){
            return new Node(ar[r1][c1],1);
        }

        Node * root;

        Node* topLeft = helper(ar,r1 ,c1 ,r1+(r2-r1)/2 ,c1+(c2-c1)/2,len/2);
        Node* topRight = helper(ar, r1 ,c1+(c2-c1)/2+1,r1+(r2-r1)/2 ,c2,len/2);
        Node* bottomLeft = helper(ar, r1+(r2-r1)/2+1 , c1,r2 , c1+(c2-c1)/2 ,len/2);
        Node* bottomRight = helper(ar, r1 + (r2-r1)/2+1,c1 +(c2-c1)/2+1 ,r2,c2,len/2);

        if( (allones(topLeft->val,topRight->val,bottomLeft->val,bottomRight->val) ||
          allzeros(topLeft->val,topRight->val,bottomLeft->val,bottomRight->val) )  &&
           topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf && bottomRight->isLeaf
          ){
            root = new Node(topLeft->val,1);

            // delete topLeft ;
            // delete topRight;
            // delete bottomLeft;
            // delete bottomRight;
        }
        else{
            root = new Node(1,0);
            root->topLeft = topLeft;
            root->topRight = topRight;
            root->bottomRight = bottomRight;
            root->bottomLeft = bottomLeft;
        }

        return root;
    }
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return helper(grid,0,0,n-1,n-1,n);
    }
};