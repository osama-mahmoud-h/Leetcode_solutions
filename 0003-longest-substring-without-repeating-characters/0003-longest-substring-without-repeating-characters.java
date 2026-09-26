import java.util.Arrays;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        // Guard clause for null or empty input
        if (s == null || s.isEmpty()) {
            return 0;
        }

        int maxLength = 0;
        int left = 0;

        // Tracks the last seen index of each ASCII character
        int[] lastSeenIndex = new int[128];
        Arrays.fill(lastSeenIndex, -1);

        for (int right = 0; right < s.length(); right++) {
            char currentChar = s.charAt(right);
            
            // If the character was seen within the current active window
            if (lastSeenIndex[currentChar] >= left) {
                left = lastSeenIndex[currentChar] + 1;
            }

            // Record/update the latest index for this character
            lastSeenIndex[currentChar] = right;

            // Calculate current valid window size
            int currentWindowLength = right - left + 1;
            maxLength = Math.max(maxLength, currentWindowLength);
        }

        return maxLength;
    }
}