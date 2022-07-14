class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int prod = 1, count = 0;
      vector<int> res;
      for(int i = 0; i < nums.size(); i++){
          if(nums[i] != 0)
           prod *= nums[i];
          else
              count++;
      }
      for(int i = 0; i < nums.size(); i++){
          if(nums[i] == 1  && count == 0)
              res.push_back(prod);
          else if( count == 0 && nums[i] != 0)
              res.push_back(prod / nums[i]);
          else if(nums[i] == 0 && count == 1)
              res.push_back(prod);
          else
              res.push_back(0);
      }
     return res;
    }
};
