import java.util.*;
class Solution {
    public int longestPalindrome(String s) {
        int ans = 0;
        boolean check = false;
        HashMap<Character,Integer> charas = new HashMap<>();
           for(int i = 0; i < s.length(); i++){
            charas.put(s.charAt(i), 0 );
           }
       for(int i = 0; i < s.length(); i++){
           int a = charas.get(s.charAt(i));
           charas.put(s.charAt(i), charas.get(s.charAt(i)) +1 );
       }
       for(int second : charas.values()){
            ans += (second / 2) * 2;
            if(second % 2 == 1 && check == false){
                ans++;
                check = true;
            }
        }
        return ans;
    }
}
