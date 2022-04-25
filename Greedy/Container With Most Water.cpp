class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = -1, right = height.size() -1 , left = 0,x ; 
        while(left != right){
            x = abs(right - left);
            int Min_height = min(height[left], height[right]);
            if (x * Min_height > res) res = x * Min_height;
            if (height[left] < height[right]) left++;
            else
                right--;
       }
        return res;
    }
};
