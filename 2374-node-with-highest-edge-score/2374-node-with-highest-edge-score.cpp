class Solution {
public:
    int edgeScore(vector<int>& edges) {
          int n = edges.size();
    vector<long long int> score(n,0);
    for (int i = 0; i < n; ++i) {
        score[edges[i]]+=i;
    }

    long long int max_score = -1;
    int min_index = n;

    for (int i = 0; i < n; ++i) {
        if(score[i]>max_score){
            max_score = score[i];
            min_index = i;
        }
    }

    return min_index;
    }
};