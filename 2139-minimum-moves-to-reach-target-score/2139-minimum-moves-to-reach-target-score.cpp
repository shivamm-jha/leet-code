class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(maxDoubles<=0) break;
            if(target%2==0){
                target=target>>1;
                maxDoubles--;
            }
            else target--;
            count++;
            cout<<count<<endl;
        }
        // cout<<target<<endl;
        
        
        return count+(target-1);
    }
};