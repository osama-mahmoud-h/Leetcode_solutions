class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n = strs.length, m = strs[0].length();

        StringBuilder prefix = new StringBuilder();

        for(int j = 0; j < m; j++){
            char cur = strs[0].length() == 0 ? '$' :  strs[0].charAt(j);
            boolean theSame = true;
            for (int i = 0; i < n ; i++){
                if(j >= strs[i].length() || strs[i].charAt(j) != cur){
                    theSame = false;
                    break;
                }
            }
            if(theSame)
                prefix.append(cur);
            else break; 

        }

        return prefix.toString();
    }
}