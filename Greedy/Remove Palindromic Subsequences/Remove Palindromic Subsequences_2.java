class Solution {
    public boolean isPalindrom(String s){
        int left = 0, right = s.length() - 1;
        while(left < right){
            if(s.charAt(left) != s.charAt(right))
                return false;
            left++;
            right --;
        }
        return true;
    }
    public int removePalindromeSub(String s) {
        if(s.length() == 0) return 0;
        else if(isPalindrom(s) == true) return 1;
        else 
            return 2;
    }
}
