class Solution {
    public int maxOperations(int[] nums, int k) {
        // Arrays.sort(nums);
        // int l=0 , h= nums.length-1;
        // int count =0;
        // while(l<h){
        //     if(nums[l]+nums[h]==k){
        //         count++;
        //         l++;
        //         h--;
        //     }
        //     else if(nums[l]+nums[h]<k)l++;
        //     else h--;
        // }
        // return count;
        
        
        HashMap<Integer,Integer> mp = new HashMap<>();
        int count =0;
        for(int i=0;i<nums.length;i++){
            if(mp.containsKey(k-nums[i])){
                count++;
                if(mp.get(k-nums[i])==1) mp.remove(k-nums[i]);
                else mp.put(k-nums[i], mp.get(k-nums[i])-1);
            }
               else{
                   mp.put(nums[i], mp.getOrDefault(nums[i],0)+1);
               }
        }
         return count;
    }
}
               
        