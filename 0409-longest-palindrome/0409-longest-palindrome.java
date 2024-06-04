class Solution {
    public int longestPalindrome(String s) {
         Map<Character,Integer> map=new HashMap<>();
        int sum=0;
        for(char c:s.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
            
        }
        
        for(Integer i:map.values()){
            if(sum%2==1){
                if(i%2==0)sum+=i;
                else 
                    sum+=i-1;
            }
            else sum+=i;
        }
        return sum;
    }
}