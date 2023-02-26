class Solution {
    public int search(int[] nums, int target) {
        int mid ,index = -1;
        mid = nums.length / 2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]){
         for(int i = mid + 1; i < nums.length; i++)
             if(target == nums[i]) return i;
        }
        else{
          for(int i = 0; i < mid; i++)
              if(target == nums[i]) return i;
        }
        return index;
    }
}
