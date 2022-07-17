class Solution {
    public String addStrings(String num1, String num2) {
       int i = num1.length() - 1, j = num2.length() - 1, a=0, b=0, carry = 0, sum = 0;
       String res = "";
        while(carry > 0 || (i >= 0 || j >= 0)){
            if(i >=0 ) a = num1.charAt(i) - '0';
            if(j >= 0) b = num2.charAt(j) - '0';
            sum = a + b + carry;
            carry = sum / 10;
            sum %= 10;
            res += Integer.toString(sum);
            i--; j--;
            a = 0; b =0;
        }
        if(carry > 0) res += Integer.toString(carry);
      res= new StringBuilder(res).reverse().toString();
        return res;
    }
}
