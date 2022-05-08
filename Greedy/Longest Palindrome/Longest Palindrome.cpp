class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int> charas;
       bool check = false;
       int ans = 0;
       for(int i = 0; i < s.size(); i++)
           charas[s[i]]++;
        for(auto i : charas){
            ans += (i.second / 2) * 2;
            if(i.second % 2 == 1 && check == false){
                ans++;
                check = true;
            }
        }
        return ans;
    }
};
