import java.lang.Math;
class Solution {
    public int maxArea(int[] height) {
        int res = -1, right = height.length-1, left = 0,x ;
        while(left != right){
            x = Math.abs(right - left);
            int Min_height = Math.min(height[left], height[right]);
            if (x * Min_height > res) res = x * Min_height;
            if (height[left] < height[right]) left++;
            else
                right--;
        }
        return res;
    }
}
