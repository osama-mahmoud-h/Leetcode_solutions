
class Solution {
    public boolean isAnagram(String s, String t) {
        int n = s.length(), m = t.length();
        if(n != m)
            return false;

        int[] mapS =  new int[26] , mapT = new int[26]; // by default is 0;
        Arrays.fill(mapS, 0);
        Arrays.fill(mapT, 0);

        for (int i = 0; i < n; i++) {
            mapS[s.charAt(i) - 'a']++;
            mapT[t.charAt(i) - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if(mapS[i] != mapT[i])
                return false;
        }
        return true;
    }
}