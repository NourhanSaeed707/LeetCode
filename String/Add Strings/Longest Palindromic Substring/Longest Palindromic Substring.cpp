class Solution {
public:
    string longestPalindrome(string s) {
       vector< vector<int>> dp(s.size(),vector<int>(s.size(),0));
       string res = "";
       int maxSize = 0;
       for(int diff = 0; diff < s.size(); diff++){
         for(int i = 0,j = i+diff; j < s.size(); i++, j++){
             if(i == j) 
                 dp[i][j] = 1;
             else if(diff == 1){
                 if(s[i] == s[j]) 
                     dp[i][j] = 1;
                 else dp[i][j] = 0;
             }
             else{
                 if(s[i] == s[j] && dp[i+1][j-1] == 1)
                     dp[i][j] = 1;
             }
             if(dp[i][j] == 1){
                 if(j-i+1 > maxSize){
                     maxSize = j-i+1;
                     res = s.substr(i, maxSize);
                 }
             }
         }
       }
        return res;
    }
};
