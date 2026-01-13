class Solution {
private:
    double sum_under_y(const vector<vector<int>>& squares, double y) {
    double sum = 0.0;

    for (const auto& square : squares) {
        double bottom = square[1];
        double side   = square[2];
        double top    = bottom + side;

        if (y <= bottom)
            continue; // completely above line

        double height = min(y, top) - bottom;
        sum += height * side;
    }

    return sum;
}

public:
    double separateSquares(vector<vector<int>>& squares) {
        double total_space = 0.0, ans = 0.0;
        total_space = accumulate(squares.begin(), squares.end(), 0.0, [](double acc, const vector<int>&cords){
            return acc + (cords[2] * 1.0)*cords[2];
        });

        double st = 0.0, end = 1e9 * 1.0, half_space = total_space / 2.0;

        while (end - st > 1e-6) {
            double mid = (st + end) / 2.0;
            double area = sum_under_y(squares, mid);

            if (area >= half_space)
                end = mid;
            else
                st = mid;
        }

       // cout<<"st: "<<st<<", end: "<<end<<"\n";
    return st; //(st + end) / 2.0;
    }
};