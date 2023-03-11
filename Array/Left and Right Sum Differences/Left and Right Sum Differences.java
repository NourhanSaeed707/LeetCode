class Solution {
    public int[] leftRigthDifference(int[] nums) {
        int[] leftSum = new int[nums.length ];
        int [] rightSum = new int[nums.length ];
        int [] res = new int[nums.length ];
        int left = 0, right = 0;
        for(int i = 0; i < nums.length; i++){
            if(i > 0)
              left += nums[i - 1];
            leftSum[i] = left;
            right = 0;
            for(int j = i + 1; j < nums.length; j++) 
               right += nums[j];
            rightSum[i] = right;
            res[i] = Math.abs(leftSum[i] - rightSum[i]);
        }
        return res;
    }
}
