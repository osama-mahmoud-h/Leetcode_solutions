typedef long long int ll;

class Solution {
private:
    int lowPos(ll spell,ll success,vector<int>& potions){
        int l = 0, h = potions.size(),ans = -1;
        while (l<h){
            int mid = (l+h)/2;
            if(spell*potions[mid]>=success){
                ans = mid;
                h=mid;
            } else{
                l=mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        
        int n = spells.size() , m = potions.size();
        int i=0;
        vector<int>ans(n);
        for (const auto &item: spells){
            int res = lowPos(item,success,potions);
           // cout<<item<<" , "<<res<<"\n";
            ans[i++] = res<0 ? 0 : m-res ; 
        }
        
        return ans;
    }
};