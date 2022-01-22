class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int size = trust.size();
        set<int> st;
        for(int i=0;i<size;i++){
            st.insert(trust[i][0]);
        }
        
        int possible_ans=-1;
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                possible_ans=i; break;
            }
        }
        
        int count=0;
        for(int i=0;i<size;i++){
            if(trust[i][1]==possible_ans)count++;
        }
        
        if(count==n-1)return possible_ans;
        return -1;
        
       
    }
};

