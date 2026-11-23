class ProductOfNumbers {
  //   private List<Integer>ans;
     private Map<Integer,Integer>map=new HashMap<>();
     private int cnt=1;
     private int ans=1;
    public ProductOfNumbers() {
       // ans=new ArrayList<>();
    }
    
    public void add(int num) {
        ans*=num;
        if(num==0){
            ans=1;
            cnt=1;
            map.clear();
            return;
        }
        map.put(cnt++,ans);
    }
    
    public int getProduct(int k) {
      //  System.out.print(map);
        if(k>map.size())return 0;
        else if(map.size()==k)return map.get(map.size());
        return map.size()-k>0?ans/map.get(map.size()-k):0;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */