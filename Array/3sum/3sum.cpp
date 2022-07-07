class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int>> sum3;
        vector<int> num;
        vector<int> v;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; i++) {
            if ( i == 0 || (i -1 >= 0 && nums[i] != nums[i - 1]) ) {
                int low = i + 1;
                int high = nums.size() - 1;
                while (low < high) {
                    int sum = nums[i] + nums[low] + nums[high];
                    if (sum == 0) {
                        num.push_back(nums[i]);
                        num.push_back(nums[low]);
                        num.push_back(nums[high]);
                        sum3.push_back(num);
                        num.clear();
                        while (low < high && nums[low] == nums[low + 1]) low++;
                        while (low < high && nums[high] == nums[high - 1]) high--;
                        low++;
                        high--;
                    }
                    else if (sum > 0) high--;
                    else low++;
                    
                }
            }
        }
        return sum3;
    }
};
