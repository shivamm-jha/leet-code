class Solution {
public:
    unordered_map<int,int> umap;
    int solve(int startValue , int target){
        if(startValue >= target){
            return startValue - target;
        }
        if(umap.find(target)!=umap.end()){
            return umap[target];
        }
        if(target & 1){
            return umap[target] = 1 + solve(startValue,target+1);
        }
        else{
            return umap[target]=  1 + solve(startValue, target/2);
        }
    }
    
    int brokenCalc(int startValue, int target) {
//         int count = 0;
//         while(target > startValue){
//             if(target%2==0){
//                 target/=2;
//             }
//             else target++;
//             count++;
//         }
        
       
//         return count + (startValue - target);
        
       return  solve(startValue, target);
    }
};

