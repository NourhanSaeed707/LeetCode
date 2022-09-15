/*
   1- The town judge trusts nobody.
   2- Every one trust judge ( n - 1 )
   //////////////////////////////////////////////////////
   i make array with 2 rows --> first row for trust if the person trust person then i will the value = 1
   and i will increase the value of column in trusted person.
*/
class Solution {
    public int findJudge(int n, int[][] trust) {
        int[][] trustarr = new int[2][n+1];
        for(int i = 0;  i <= n; i++) {
            trustarr[0][i] = 0;
            trustarr[1][i] = 0;
        }
        for(int i = 0; i < trust.length; i++) {
            trustarr[0][trust[i][0]] = 1;
            trustarr[1][trust[i][1]]++;
        }
        for(int j = 1; j <= n; j++)
            if( trustarr[1][j] == n - 1 && trustarr[0][j] == 0)
                return j;
        return -1;
    }
}
