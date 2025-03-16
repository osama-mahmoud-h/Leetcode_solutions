class Solution {
private:
    long long int cars_repaired(vector<int>& ranks, int cars, long long int time){
       long long int repaired_cars = 0;
        for (int rank : ranks) {
            repaired_cars += sqrt(time*1.0/rank);
        }
        return repaired_cars ;
    }
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long int low = 0, high = 1e14 + 1;

        while(low < high){
            long long int mid_time = (low + high)/2;
            if(cars_repaired(ranks,cars,mid_time)>=cars){
                high = mid_time - 1;
            }else{
                low = mid_time + 1;
            }
        }

        return low;
    }
};
