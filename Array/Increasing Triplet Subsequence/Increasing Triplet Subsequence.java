class Solution {
    public boolean increasingTriplet(int[] nums) {
       int first = Integer.MAX_VALUE , second = Integer.MAX_VALUE,
        third = Integer.MAX_VALUE, c1 = 0, c2=0,c3=0; 
      for(int i = 0; i < nums.length; i++){
         if(nums[i] < first){
             first = nums[i];
             c1++;
         }
         else if(nums[i] < second && nums[i] > first  ){
             second = nums[i];
             c2++;
         }
         else if(nums[i] <= third && nums[i] > second ){
             third = nums[i];
             c3++;
         }
      }
    if(third > second && second > first && c1 > 0 && c2 > 0 &&c3 > 0)
            return true;
        return false;
       
    }
}
