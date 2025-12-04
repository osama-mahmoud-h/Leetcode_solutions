class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();

        // skip all leading L's (no collision)
        int i = 0;
        while (i < n && directions[i] == 'L') i++;

        // skip all trailing R's (no collision)
        int j = n - 1;
        while (j >= 0 && directions[j] == 'R') j--;

        int collisions = 0;

        // count all moving cars in the middle region
        for (int k = i; k <= j; k++) {
            if (directions[k] != 'S')
                collisions++;
        }

        return collisions;
    }
};