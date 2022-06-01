class Solution {
    public List<Integer> spiralOrder(int[][] nums) {
        List<Integer> ans = new ArrayList<Integer>();
        int n = nums.length;
        int m = nums[0].length;
        int rstart =0 , rend = n-1;
        int cstart = 0 , cend = m-1;
        int dir =0;
        while(rstart<=rend && cstart<=cend){
            if(dir==0){
                for(int i=cstart;i<=cend;i++){
                    ans.add(nums[rstart][i]);
                }
                rstart++;
            }
            else if(dir==1){
                for(int i=rstart;i<=rend;i++){
                    ans.add(nums[i][cend]);
                }
                cend--;
            }
            else if(dir==2){
                for(int i=cend;i>=cstart;i--){
                    ans.add(nums[rend][i]);
                }
                rend--;
            }
            else if(dir==3){
                for(int i=rend;i>=rstart;i--){
                    ans.add(nums[i][cstart]);
                }
                cstart++;
            }
            
            dir = (dir+1)%4;
        }
        return ans;
    }
}