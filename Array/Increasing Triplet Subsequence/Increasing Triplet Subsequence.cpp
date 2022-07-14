class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int first = INT_MAX , second = INT_MAX, third = INT_MAX, c1 = 0, c2=0,c3=0; 
      for(int i = 0; i < nums.size(); i++){
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
};
