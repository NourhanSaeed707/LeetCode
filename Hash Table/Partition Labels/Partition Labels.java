class Solution {
    public List<Integer> partitionLabels(String s) {
        HashMap<Character, Integer> partition = new HashMap<Character, Integer>();
        int last, sum = 0;
        List<Integer> res = new ArrayList<>();
        for(int i = 0; i < s.length(); i++)
            partition.put(s.charAt(i), -1);
        for(int i = 0; i < s.length(); i++)
            partition.put(s.charAt(i), i);
         for(int i = 0; i < s.length(); i++){
             last = partition.get(s.charAt(i));
              for(int j = i; j<=last; j++){
                  last = Math.max(last, partition.get(s.charAt(j)));
                  sum++;
              }
              res.add(sum);
              sum = 0; 
              i = last;
         }
        return res;
    }
}
