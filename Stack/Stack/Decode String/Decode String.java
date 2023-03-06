class Solution {
    public String decodeString(String s) {
        Stack<Character> stack = new Stack<>();
        String res = "";
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) != ']')
                stack.push(s.charAt(i));
            else{
                StringBuilder substring  = new StringBuilder("");
                while(stack.peek() != '['){
                    substring.append( stack.pop());
                }
                substring.reverse();
                stack.pop();
                StringBuilder k = new StringBuilder();
                while(!stack.isEmpty() && Character.isDigit(stack.peek())){
                    k.append(stack.pop());
                }
                k.reverse();
                for(int x = 0; x < Integer.parseInt(k.toString()); x++){
                 for(int j = 0; j < substring.length(); j++){
                    stack.push(substring.charAt(j));
                  }
                }
            }
        }
        StringBuilder r = new StringBuilder();
        while(!stack.isEmpty()){
         if(Character.isDigit(stack.peek())) stack.pop();
         if(!stack.isEmpty())
          r.append(stack.pop());
        }
        r.reverse();
        return r.toString();
    }
}
