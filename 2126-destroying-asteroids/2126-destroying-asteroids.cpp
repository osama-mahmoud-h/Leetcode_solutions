class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
   sort(asteroids.begin(),asteroids.end());
        for(auto i:asteroids){
		if(mass>=1e5)
		  return 1;
        if(mass>=i){
            mass+=mass>=1e5?0:i;
        } else{
            return 0;
        }
    }
    
    return 1;
    }
};

/*

[3,5,9,19,21]
[]

*/