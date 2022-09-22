class Solution {
    public String reverseWords(String s) {
        
        char[] charArr = s.toCharArray();
        
        for(int i=0;i<charArr.length;i++) {
            int j = i;
            while((j != charArr.length - 1) && (charArr[j] != ' ')) {
                j++;
            }
            
            int k = i;
            int l = j;
            
            if(charArr[j] == ' ') {
               j = j - 1;
            }
            
            while(k < j) {
                if(charArr[k] != charArr[j]) {
                    char temp = charArr[k];
                    charArr[k] = charArr[j];
                    charArr[j] = temp;                       
                }
                k++;
                j--;                
            }
            
            i = l;       
            
        }
        
        return new String(charArr);        

    }
}

