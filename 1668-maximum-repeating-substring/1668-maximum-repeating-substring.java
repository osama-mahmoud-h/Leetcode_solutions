class Solution {
    public int maxRepeating(String sequence, String word) {
        int ans=0;
        for(int i=0;i<sequence.length()-word.length()+1; ){
             if(sequence.substring(i,word.length()+i).equals(word))
               {  ans++;
               i+=word.length();
               }
            else i++;
        }
        return ans;
    }
}