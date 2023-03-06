class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> que = new PriorityQueue<>(Collections.reverseOrder());
        for(int i = 0; i < stones.length; i++)
          que.add(stones[i]);
        int x, y;
        while(que.size() > 1){
            x = que.poll();
            y = que.poll();
            if(x > y)
               que.add(x - y);
        }
        return que.isEmpty() ? 0 : que.poll();
    }
}
