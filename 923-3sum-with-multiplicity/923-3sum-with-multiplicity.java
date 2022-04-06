class Solution {
    int mod = 1000000007;
    public  int ans(int[] arr , int target){
        HashMap<Integer, Integer> map = new HashMap<>();
        int count =0;
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
               int key = target - (arr[i]+arr[j]);
               if(map.containsKey(key)){
                   count+=map.get(key);
               }
            }
            count%=mod;
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i])+1);
            }
            else map.put(arr[i],1);
        }
        return count%mod;
//         Map<Integer, Integer> map = new HashMap<>();
        
//         int res = 0;
//         int mod = 1000000007;
//         for (int i = 0; i < arr.length; i++) {
//             res = (res + map.getOrDefault(target - arr[i], 0)) % mod;
            
//             for (int j = 0; j < i; j++) {
//                 int temp = arr[i] + arr[j];
//                 map.put(temp, map.getOrDefault(temp, 0) + 1);
//             }
//         }
//         return res;
    }
    public int threeSumMulti(int[] arr, int target) {
        int res = ans(arr,target);
        return res;
    }
}