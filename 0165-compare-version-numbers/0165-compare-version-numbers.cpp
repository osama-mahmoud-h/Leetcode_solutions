class Solution {
private:
    vector<string> split(const string& str, char delimiter) {
        vector<string> result;
        stringstream ss(str);
        string token;

        while (getline(ss, token, delimiter)) {
            result.push_back(token);
        }

        return result;
    }
    bool compare(string n1, string n2) {
        // Remove leading zeros first (if any)
        while(n1.length() > 1 && n1[0] == '0') n1 = n1.substr(1);
        while(n2.length() > 1 && n2[0] == '0') n2 = n2.substr(1);

        // Compare lengths first
        if(n1.length() > n2.length()) return 1;
        if(n1.length() < n2.length()) return -1;

        return 0;
    }
public:
    int compareVersion(string version1, string version2) {
        vector<string> v1 = split(version1,'.');
        vector<string> v2 = split(version2,'.');


        int i=0, j=0;
        int n = v1.size(), m = v2.size();

        while (i < n || j < m){
            string ver1 = i >= n ? "0" : v1[i++];
            string ver2 = j >= m ? "0" : v2[j++]; 
            int cmp = compare(ver1, ver2);

            if(cmp > 0)
                return 1;
            else if(cmp < 0)
                return -1;
        }
        return 0;
    }
};