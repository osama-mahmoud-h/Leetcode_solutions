class Solution {
    private boolean isVowel(int c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    public int maxFreqSum(String s) {
         return s.chars()
                .boxed()
                .collect(Collectors.groupingBy(c -> !isVowel(c),Collectors.groupingBy(c -> c, Collectors.counting())))
                .values().stream()
                .mapToInt(m -> m.values().stream().mapToInt(Long::intValue).max().orElse(0))
                .sum();
    }
}