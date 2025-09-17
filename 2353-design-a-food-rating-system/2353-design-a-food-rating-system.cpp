class FoodRatings {

private:
struct Comp {
    bool operator()(const pair<int,string> &a, const pair<int,string> &b) const {
        if (a.first != b.first)
            return a.first > b.first;   // higher value first
        return a.second < b.second;     // lexicographically smaller string first
    }
};

    unordered_map<string,pair<string,int>> food_cuisine_rating;
    unordered_map<string, set<pair<int,string>, Comp>> cuisine_highest_foods;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for (int i = 0; i < n; ++i) {
            cuisine_highest_foods[cuisines[i]].insert({ratings[i], foods[i]});
            food_cuisine_rating[foods[i]] = {cuisines[i], ratings[i]};
        }
    }

    void changeRating(string food, int new_rating) {
        int old_rating = food_cuisine_rating[food].second;
        string its_cuisine = food_cuisine_rating[food].first;
        cuisine_highest_foods[its_cuisine].erase({old_rating,food});
        cuisine_highest_foods[its_cuisine].insert({new_rating, food});
        food_cuisine_rating[food].second = new_rating;
    }

    string highestRated(string cuisine) {
        return cuisine_highest_foods[cuisine].begin()->second;
    }
};