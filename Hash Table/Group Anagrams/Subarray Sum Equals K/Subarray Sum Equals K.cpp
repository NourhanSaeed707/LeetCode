class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, res = 0, sub = 0;
        unordered_map<int,int> prefixSum;
        for(int i = 0; i <= nums.size(); i++){
            if(i == 0)
                prefixSum[0] = 1;
            else 
                prefixSum[i] = 0;
        }
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            sub = sum - k;
            if(prefixSum.find(sub) != prefixSum.end())
                res += prefixSum[sub];
            prefixSum[sum]++;
        }
        return res;
    }
};
