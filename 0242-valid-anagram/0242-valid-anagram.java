
class Solution {
    public boolean isAnagram(String s, String t) {
        int n = s.length(), m = t.length();
        if(n != m)
            return false;
        
        char [] chars = s.toCharArray();
        char [] chart = t.toCharArray();

        Arrays.sort(chars); Arrays.sort(chart);

        s = new String(chars); t = new String(chart);

        return s.equals(t);
    }
}