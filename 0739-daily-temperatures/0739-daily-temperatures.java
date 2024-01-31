class Solution {
    public int[] dailyTemperatures(int[] T) {
     int ans[]=new int [T.length];
      //  Map<Integer,Integer>map=new HashMap();
        Stack<Integer>st=new Stack<>();
       // for (int i = 0; i <T.length ; i++)
       //     map.put(i,T[i]);
        for (int i = 0; i <T.length ; i++) {
            while(!st.isEmpty()&&T[st.peek()]<T[i])
                 ans[st.peek()]=i-st.pop();
                st.push(i);
        }
        return ans;
    }
}