class Solution {
    public double largestTriangleArea(int[][] points) {
        
        double max=0;
        
        for(int x=0;x<points.length-2;x++)
        for(int j=0;j<points.length;j++){
        for(int i=0;i<points.length;i++){
            if(i==j)continue;
            if(Area(points[x],points[j],points[i])>max)
                max=Area(points[x],points[j],points[i]);
           // System.out.print(Area(points[x],points[j],points[i])+"  ");
        }
        }
       // (Area(points[0],points[1],points[2]));
        return max;
    }
    double Area(int p1[],int p2[],int []p3){
        double l1=Math.sqrt((p2[0]-p1[0])*(p2[0]-p1[0]) + (p2[1]-p1[1])*(p2[1]-p1[1]));
        double l2=Math.sqrt((p2[0]-p3[0])*(p2[0]-p3[0]) + (p2[1]-p3[1])*(p2[1]-p3[1]));
        double l3=Math.sqrt((p3[0]-p1[0])*(p3[0]-p1[0]) + (p3[1]-p1[1])*(p3[1]-p1[1]));
        
        double Halfofpremiter=(l1+l2+l3)/2;
        // calaculating Area of rectangle using Hero rule.
        return Math.sqrt(Halfofpremiter*(Halfofpremiter-l1)*(Halfofpremiter-l2)*(Halfofpremiter-l3));
    }
}