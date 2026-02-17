class Solution {
    set<string> all_perm;
   vector<int> generateMasks(int bits, int ones) {
    vector<int> result;

    if (ones > bits || ones < 0) return result;

    // Special case: zero bits set
    if (ones == 0) {
        result.push_back(0);
        return result;
    }

    int x = (1 << ones) - 1;
    int limit = (1 << bits);

    while (x < limit) {
        result.push_back(x);

        int c = x & -x;
        int r = x + c;

        if (r == 0) break;  // overflow safety

        x = (((r ^ x) >> 2) / c) | r;
    }

    return result;
}

void distribute(int n, int n2, int m) {

    int minK = max(0, m - n2);
    int maxK = min(m, n);

    for (int k = 0; k <= m; k++) {

        vector<int> hours  = generateMasks(n, k);
        vector<int> minutes = generateMasks(n2, m - k);

       // cout << "Split: (" << k << ", " << m - k << ")\n";

        for (int hr : hours) {
            for (int mn : minutes) {
                if(hr >= 0 and hr <= 11 and mn >=0 and mn <= 59){
                    string hour = to_string(hr);
                    string mnt = (mn < 10 ? "0" : "") + to_string(mn);
                    all_perm.insert(hour+":"+mnt);
                }
                   
               // cout << "Pair: (" << hr << ", " << mn << ")\n";
            }
        }

        //cout << "-------------------\n";
    }
}
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        if(turnedOn  > 8)
            return ans;

            distribute(4,6, turnedOn);
        return vector<string>(all_perm.begin(), all_perm.end());
    }
};