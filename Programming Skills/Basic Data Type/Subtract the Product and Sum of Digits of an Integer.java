
class Solution {
    public int subtractProductAndSum(int n) {
        long sum=0;
        long prod=1;
        while( n > 0 ) {
           int res = n % 10;
           sum += res;
           prod *= res;
           n /= 10;
        }
        return (int)prod - sum;
    }
}
