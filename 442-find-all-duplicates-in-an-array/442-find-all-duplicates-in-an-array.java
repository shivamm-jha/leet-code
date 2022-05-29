class Solution {
    public List<Integer> findDuplicates(int[] nums) {
//         T.c = 0(N^2) , S.C = 0(1)
        // List<Integer> ans = new ArrayList<Integer>();
        // int n = nums.length;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             ans.add(nums[i]);
        //         }
        //     }
        // }
        // return ans;
        
//         better solution .... T.C = 0(N) , S.C = 0(1)
        
//         HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
//         for(int num : nums){
//             map.put(num, map.getOrDefault(num,0)+1);
//         }
        
//         List<Integer> ans = new ArrayList<Integer>();
//         for(int num : nums){
//             if(map.get(num)==2){
//                 ans.add(num);
//                 map.put(num,0);
//             }
//         }
//         return ans;
        
        
        
//         best solution T.C = 0(N), S.C = 0(1)
        List<Integer> ans = new ArrayList<Integer>();
        int n = nums.length;
        for(int i=0;i<n;i++){
            int idx = Math.abs(nums[i])-1;
            if(nums[idx]<0){
                ans.add(idx+1);
            }
            else{
                nums[idx]= - nums[idx];
                
            }
        }
        
        return ans;
        
    }
}