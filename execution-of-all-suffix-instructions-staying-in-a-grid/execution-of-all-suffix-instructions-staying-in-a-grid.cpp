class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m=s.size();
       
        vector<int> v;
        for(int i=0;i<m;i++){
             int x=startPos[0],y=startPos[1];
            int count=0;
            int j=i;
            while(true){
                if(x>=n || x<0 || y>=n || y<0) break;
                if(s.size()==j) break;
                
                if(s[j]=='R'){
                    y+=1; 
                }
                else if(s[j]=='D'){
                    x+=1; 
                }
                else  if(s[j]=='L'){
                    y-=1;
                }
                else x-=1; 
                j++;
                
                if(x<n and x>=0 and y<n and y>=0)count++;
            }
            v.push_back(count);
        }
        return v;
    }
};