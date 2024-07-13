struct Robot {
    int index;
    int position;
    int health;
    bool dir; // 0 left, 1 right
    Robot(int index, int position, int health, bool dir) : index(index), position(position), health(health), dir(dir) {}
};

class Solution {
private:
    vector<int> survived_robots(stack<Robot>& st) {
        vector<Robot> robots;
        while (!st.empty()) {
            robots.push_back(st.top());
            st.pop();
        }

        sort(robots.begin(), robots.end(), [&](Robot r1, Robot r2) {
            return r1.index < r2.index;
        });

        vector<int> health(robots.size(), 0);
        transform(robots.begin(), robots.end(), health.begin(), [](const Robot& r) { return r.health; });
        return health;
    }

public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<Robot> robots;
        for (int i = 0; i < n; ++i) {
            robots.push_back(Robot(i, positions[i], healths[i], directions[i] == 'R' ? 1 : 0));
        }

        sort(robots.begin(), robots.end(), [&](Robot r1, Robot r2) {
            return r1.position < r2.position;
        });

        stack<Robot> st;
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && st.top().dir == 1 && robots[i].dir == 0) {
                Robot r = st.top();
                st.pop();
                if (r.health > robots[i].health) {
                    r.health--;
                    if (r.health > 0) {
                        st.push(r);
                    }
                    robots[i].health = 0;
                    break;
                } else if (r.health < robots[i].health) {
                    robots[i].health--;
                    if (robots[i].health > 0) {
                        continue;
                    }
                } else {
                    r.health = 0;
                    robots[i].health = 0;
                    break;
                }
            }
            if (robots[i].health > 0) {
                st.push(robots[i]);
            }
        }

        return survived_robots(st);
    }
};