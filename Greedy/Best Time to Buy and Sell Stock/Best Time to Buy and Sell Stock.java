class Solution {
    public int maxProfit(int[] prices) {
       if(prices.length  == 1) return 0;
       int maxProfit = 0, left = prices[0], right;
       for(int i = 1; i < prices.length; i++){
           right = prices[i];
           int profit = right - left;
           if(profit < 0){
               left = right;
               if(i + 1 < prices.length)
                right = prices[i+1];
           }
           else if(profit > maxProfit){
             maxProfit = profit;
           }
       }
       return maxProfit;
    }
}
