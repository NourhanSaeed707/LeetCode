/*
   1- The town judge trusts nobody.
   2- Every one trust judge ( n - 1 )
   //////////////////////////////////////////////////////
   i make vector with 2 rows --> first row for trust if the person trust person then i will the value = 1
   and i will increase the value of column in trusted person.
*/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> trustVec;
        for(int i = 0 ; i < 2; i++){
            vector<int> v (n + 1, 0);
            trustVec.push_back(v);
        }
        for(int i = 0; i < trust.size(); i++){
          // person trust another one so make it = 1;
            trustVec[0][trust[i][0]] = 1;
          //that increment the value of trusted person that the other people trust to figure out if he is the judge or not.
            trustVec[1][trust[i][1]]++;
        }
        for(int j = 1; j <= n; j++)
            if( trustVec[1][j] == n - 1 && trustVec[0][j] == 0)
                return j;
        return -1;
    }
};
