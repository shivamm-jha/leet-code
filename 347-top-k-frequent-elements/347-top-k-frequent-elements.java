class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        List<Integer>[] bucket = new List[nums.length+1];
        for(int i=0;i<nums.length;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        
        
        for(int i: mp.keySet()){
            int freq = mp.get(i);
            if(bucket[freq]== null){
                bucket[freq]= new ArrayList<>();
            }
            
            bucket[freq].add(i);
        }
        
        
        int[] ans = new int[k];
        int count =0;
        for(int i= bucket.length-1 ;i>=0;i--){
            if(bucket[i]!=null){
                for(int j=0;j<bucket[i].size();j++){
                    ans[count++] = bucket[i].get(j);
                }
            }
            if(count==k)break;
        }
        return ans;
    }
}