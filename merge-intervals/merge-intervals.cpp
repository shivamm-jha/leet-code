class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        stack<pair<int,int>> q;
        
        q.push(make_pair(v[0][0],v[0][1]));
        for(int i=1;i<v.size();i++){
            int start = v[i][0];
            int end= v[i][1];
            int q_start= q.top().first;
            int q_end= q.top().second;
            if(start<= q_end){
                q.pop();
                q.push(make_pair(q_start,max(end,q_end)));
            }
            else{
                q.push(make_pair(start,end));
            }
        }
        
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> temp;
            temp.push_back(q.top().first);
            temp.push_back(q.top().second);
            ans.push_back(temp);
            q.pop();
        }
        return ans;
    }
};