
import java.util.*;
class Solution {
    public int arrayPairSum(int[] nums) {
      int sum = 0;
      Arrays.sort(nums);
        for(int i = nums.length - 1; i >= 0; i--){
            if(i - 1 >= 0){
                sum += Math.min(nums[i], nums[i-1]);
                i--;
            }
        }  
        return sum;
    }
}
