class Solution {
    public boolean isSubsequence(String s, String t) {
        int c = 0, check = 0, ind = 0;
        for(int i = 0 ; i < s.length(); i++ ){
            for (int j = ind; j < t.length(); j++) {
               if(s.charAt(i) == t.charAt(j)){
                   ind = j + 1;
                   c++; check++; break;
               }
               else if(check == 0 && j == t.length() - 1 )
                return false;
            }
        }
        if(c == s.length()) return true;
        else return false;
    }
}
