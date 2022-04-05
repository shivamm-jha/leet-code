class Solution {
    public int maxArea(int[] height) {
//         time complexity 0(n^2)
        
//         int maxWater = 0;
//         for(int i=0;i<height.length-1;i++){
//             for(int j=i+1;j<height.length;j++){
//                 int curr = Math.min(height[i],height[j]) * (j-i);
//                 maxWater = Math.max(maxWater,curr);
//             }
//         }
        
//         return maxWater;
        
//         time complexity 0(n)
        int i =0 , j = height.length-1;
        int maxWater = Math.min(height[i],height[j]) * (j-i);
        while(i<j){
            if(height[i]<=height[j])i++;
            else j--;
            int curr = Math.min(height[i],height[j]) * (j-i);
            maxWater = Math.max(maxWater,curr);
        }
        return maxWater;
        
        
    }
}