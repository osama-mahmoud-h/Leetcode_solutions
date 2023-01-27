
class Solution {
    class TrieNode {
        TrieNode[] children = new TrieNode[26];
        boolean isWord;
    }
    public List<String> findAllConcatenatedWordsInADict(String[] words) {
        TrieNode root = new TrieNode();
        for (String word : words) {
            TrieNode current = root;
            for (char c : word.toCharArray()) {
                if (current.children[c-'a'] == null) current.children[c-'a'] = new TrieNode();
                current = current.children[c-'a'];
            }
            if (current != root) current.isWord = true;
        }
        List<String> ans = new ArrayList<>();
        for (String word : words) if (dfs(root, word.toCharArray(), 0, word.length() - 1)) ans.add(word);
        return ans;
    }
    boolean dfs(TrieNode root, char[] cstr, int left, int right) {
        TrieNode current = root;
        for (int i = left; i <= right; i++) {
            char c = cstr[i];
            if (current.children[c-'a'] == null) return false;
            current = current.children[c-'a'];
            if (current.isWord) { // prefix
                if (isWord(root, cstr, i + 1, right) || dfs(root, cstr, i + 1, right))
                    return true;
            }
        }
        return false;
    }
    boolean isWord(TrieNode root, char[] cstr, int left, int right) {
        TrieNode current = root;
        for (int i = left; i <= right; i++) {
            char c = cstr[i];
            if (current.children[c-'a'] == null) return false;
            current = current.children[c-'a'];
        }
        return current.isWord;
    }
}