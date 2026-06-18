class Solution {
    public double angleClock(int hour, int minutes) {
        
        if(hour==12)hour=0;
        double minAngle=((double)minutes*30)/5;
        double hourAngle=hour*30+((double)minutes/60)*30;
        
        double diff=minAngle-hourAngle;
        
         if(Math.abs(diff)>180)
              diff=360-Math.abs(diff);
        
        
        return Math.abs(diff);
    }
}