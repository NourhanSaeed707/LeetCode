class Solution {
    public int[] productExceptSelf(int[] nums) {
        int prod = 1, count = 0;
        int [] res = new int [nums.length];
        for(int i = 0; i < nums.length; i++){
            if(nums[i] != 0)
                prod *= nums[i];
            else 
                count++;
        }
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 1  && count == 0)
              res[i] = prod;
          else if( count == 0 && nums[i] != 0)
              res[i] = prod / nums[i];
          else if(nums[i] == 0 && count == 1)
              res[i] = prod;
          else
              res[i] = 0;
        }
        return res;
    }
}
