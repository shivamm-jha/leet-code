class Solution {
    public static int ans(int[] stones){
        if(stones.length==1)return stones[0];
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);
        for(int i=0;i<stones.length;i++){
            pq.add(stones[i]);
        }
        
        while(!pq.isEmpty()){
            int y = pq.peek();
            pq.remove(y);
            int x = pq.peek();
            pq.remove(x);
            pq.add(y-x);
            if(pq.size()==1) return pq.peek();
        }
        
        return 0;
    }
    public int lastStoneWeight(int[] stones) {
        int result = ans(stones);
        return result;
    }
}