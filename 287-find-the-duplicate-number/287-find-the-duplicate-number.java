class Solution {
    public int findDuplicate(int[] nums) {
        int n = nums.length;
//          T.C = 0(N^2) .. S.C = 0(1)
        
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return 1;
        
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<n;i++){
            if(map.containsKey(nums[i])){
                return nums[i];
            }
            
            map.put(nums[i],1);
        }
        return 1;
    }
}