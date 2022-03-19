class Solution {
public:
    map<int,int> mp;
   
    int totalWays(int currentStair , int targetStair ){
        if(currentStair==targetStair)return 1;
        if(currentStair>targetStair) return 0;
        int currentKey = currentStair;
        if(mp.find(currentKey)!=mp.end()){
            return mp[currentKey];
        }
        int oneJump = totalWays(currentStair+1,targetStair);
        int twoJump = totalWays(currentStair+2,targetStair);
        mp[currentKey]= oneJump + twoJump;
        return oneJump + twoJump;
    }
    int climbStairs(int n) {
        
        return totalWays(0,n);
    }
};