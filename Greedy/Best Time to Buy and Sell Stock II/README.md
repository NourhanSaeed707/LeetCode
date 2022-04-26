Problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

using greedy Method:
 
Here i iterate over the array and and take every element and
if( price[i] > price[i - 1]):
profit += price[i]- price[i-1];
so by this codition i make sure that i pick the max profit of elements( two elements).
