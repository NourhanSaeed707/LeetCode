
class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        ArrayDeque<Integer> que = new ArrayDeque<>();
        que.push(0);
        HashSet<Integer> set = new HashSet<>();
        int n = rooms.size();
        boolean[] visited = new boolean[n];
        while(que.size()>0){
            int rem = que.removeFirst();
            visited[rem] = true;
            set.add(rem);
            for(int k:rooms.get(rem)){
                if(visited[k]==false)
                    que.push(k);
            }
        }
        return set.size()==n;
    }
}
