class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
//         time complexity 0(n* ( m+ (n*m) ))
        int n = bank.size(),m=bank[0].size();
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int count1 =0, flag=0,count2=0;
//             for(int j=0;j<m;j++){
//                 count1+= bank[i][j]-'0';
//             }
            
//             if(count1>0){
//                 for(int k=i+1;k<n;k++){
//                     for(int l=0;l<m;l++){
//                         count2+=bank[k][l]-'0';
//                     }
//                     if(count2>0){
//                         ans+=count1*count2;
//                         break;
//                     }
//                      i=k;
//                 }
                
               
//             }
            
//         }
        
//         return ans;
        
        int ans=0;
        int pSecurityDevicefreq = 0;
       
        for(int i=0;i<n;i++){
             int cSecurityDevicefreq = 0;
            for(int j=0;j<m;j++){
                if(bank[i][j]=='1'){
                    cSecurityDevicefreq++;
                }
            }
            if(cSecurityDevicefreq>0){
                ans+= cSecurityDevicefreq * pSecurityDevicefreq;
                pSecurityDevicefreq = cSecurityDevicefreq;
            }
        }
        return ans;
    }
};