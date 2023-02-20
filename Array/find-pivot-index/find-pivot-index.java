class Solution {
    public int calculateSum(int[] nums, int start, int end){
        int sum = 0;
        for(int i = start; i < end; i++ ) {
          sum += nums[i];
        }
        return sum;
    }
    public int pivotIndex(int[] nums) {
        int pivot;
        if(nums.length == 1 ) return 0;
        for(int i = 0; i < nums.length; i++ ) {
          int leftSum = calculateSum(nums, 0, i );
          int rightSum = calculateSum(nums, i+1, nums.length);
          if(leftSum == rightSum){
              return i;
          }
        }
        return -1;
    }
}
