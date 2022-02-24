class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size(),m=bank[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count1 =0, flag=0,count2=0;
            for(int j=0;j<m;j++){
                count1+= bank[i][j]-'0';
            }
            
            if(count1>0){
                for(int k=i+1;k<n;k++){
                    for(int l=0;l<m;l++){
                        count2+=bank[k][l]-'0';
                    }
                    if(count2>0){
                        ans+=count1*count2;
                        break;
                    }
                     i=k;
                }
                
               
            }
            
        }
        
        return ans;
    }
};