class Solution {
public:
    int solve(int startValue , int target){
        if(startValue >= target){
            return startValue - target;
        }
        if(target & 1){
            return 1 + solve(startValue,target+1);
        }
        else{
            return 1 + solve(startValue, target/2);
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

// if(startValue >= target)
//             return startValue - target;
        
//         if(target & 1)// if odd
//             return 1 + brokenCalc(startValue, target  + 1);
        
//         // if even
//         return 1 + brokenCalc(startValue, target / 2);