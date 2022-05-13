class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
       for(int i = nums.size()-1; i >= 0; i--){
          if(i - 1 >= 0){
              sum += min(nums[i] ,nums[i-1]);
              i--;
          }
        }
        return sum;
    }
};
