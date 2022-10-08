class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
    sort(asteroids.begin(),asteroids.end());
    for (int i = 0; i <asteroids.size() ; ++i) {
        if(mass>=asteroids[i]||mass>=1e5){
            mass+=mass>=1e5?0:asteroids[i];
        } else{
            return 0;
        }
    }
    
    return true;
    }
};

/*

[3,5,9,19,21]
[]

*/