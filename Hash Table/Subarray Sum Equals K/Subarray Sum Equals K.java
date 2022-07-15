import java.util.*;
class Solution {
    public int subarraySum(int[] nums, int k) {
        int sum = 0, res = 0, sub = 0;
        Hashtable<Integer,Integer> prefixSum= new Hashtable<Integer, Integer>();
        for(int i = 0; i <= nums.length; i++){
            if(i == 0)
                prefixSum.put(0,1);
            else 
                prefixSum.put(i,0);
        }
        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
            sub = sum - k;
            if(prefixSum.containsKey(sub) )
                res += prefixSum.get(sub);
            prefixSum.put(sum, prefixSum.getOrDefault(sum,0) + 1 );
        }
        return res;
    }
}
