class Solution {
    public int minOperations(String s) {
        int n = s.length();
        char min = (char) s.chars().min().orElseThrow();
        char max = (char) s.chars().max().orElseThrow();
        
        char first = s.charAt(0), last = s.charAt(n-1);

        String sorted = s.chars()
                   .sorted()
                   .collect(StringBuilder::new, StringBuilder::appendCodePoint, StringBuilder::append)
                   .toString();

        if(sorted.equals(s))
            return 0;
        else if(n == 2 )
            return -1;
        else if(first == min || last == max)
            return 1 ;

        for (int i = 1; i < n - 1; i++) {
            if (s.charAt(i) == min || s.charAt(i) == max) {
                return 2;
            }
        }
        return 3;
    }
}