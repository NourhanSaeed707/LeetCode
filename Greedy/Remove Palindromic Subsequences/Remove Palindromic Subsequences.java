class Solution {
    public boolean isPalindrom(String s){
        Stack<Character> myPalindrom = new Stack<Character>();
        int j = 0, c = 0;
        for(int i = 0; i < s.length(); i++)
            myPalindrom.push(s.charAt(i));
        while(!myPalindrom.isEmpty()){
            if(myPalindrom.peek() == s.charAt(j))
               c++;
            myPalindrom.pop();
            j++;
        }
        if(c == s.length()) return true;
        else return false;
    }
    public int removePalindromeSub(String s) {
        if(s.length() == 0) return 0;
        else if(isPalindrom(s) == true) return 1;
        else 
            return 2;
    }
}
