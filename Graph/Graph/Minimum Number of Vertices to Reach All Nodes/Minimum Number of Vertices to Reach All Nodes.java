class Solution {
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
       Map<Integer, Integer> indegree = new HashMap(); 
        for(List<Integer> edge: edges){
            int end = edge.get(1);
            indegree.put(end, indegree.getOrDefault(0, end) + 1 );
            
        }
        List<Integer> res = new ArrayList<>();
        for(int i = 0; i < n; i++){
           if(!indegree.containsKey(i)){
               res.add(i);
           } 
        }
        return res;
    }
}
