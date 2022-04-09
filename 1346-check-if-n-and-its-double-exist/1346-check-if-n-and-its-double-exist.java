class Solution {
    public boolean checkIfExist(int[] arr) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i:arr){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        
        for(int i:arr){
            if(i==0){
                if(mp.containsKey(i) && mp.get(i)>=2){
                    return true;
                }
            }
            else{
                if(mp.containsKey(2*i)){
                    return true;
                }
            }
        }
        return false;
    }
}