class Solution {
    public List<Integer> findDuplicates(int[] nums) {
//         T.c = 0(N^2)
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
        
//         better solution
        
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        for(int num : nums){
            map.put(num, map.getOrDefault(num,0)+1);
        }
        
        List<Integer> ans = new ArrayList<Integer>();
        for(int num : nums){
            if(map.get(num)==2){
                ans.add(num);
                map.put(num,0);
            }
        }
        return ans;
    }
}