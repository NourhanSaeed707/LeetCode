
class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> mylist = new ArrayList<Integer>();
        if(p.length() > s.length()) return mylist;
        HashMap<Character, Integer> sCount = new HashMap<Character, Integer>();
        HashMap<Character, Integer> pCount = new HashMap<Character, Integer>(); 
        for(int i = 0; i < p.length(); i++) {
           pCount.put(p.charAt(i), pCount.getOrDefault(p.charAt(i), 0) + 1);
           sCount.put(s.charAt(i), sCount.getOrDefault(s.charAt(i), 0) + 1);
        }
        int l = 0;
        if(pCount.equals(sCount)) mylist.add(l);
        for(int i = p.length(); i < s.length(); i++){
            sCount.put(s.charAt(i), sCount.getOrDefault(s.charAt(i), 0) + 1);
            if(sCount.get(s.charAt(l)) != null)
            sCount.replace(s.charAt(l), sCount.get(s.charAt(l)) - 1);
            if(sCount.get(s.charAt(l)) != null && sCount.get(s.charAt(l)) == 0 ) 
               sCount.remove(s.charAt(l));
            l++;
            if(sCount.equals(pCount)) mylist.add(l);

        }
        return mylist;
    }
}
