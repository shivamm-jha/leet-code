class Solution {
public:
    bool possible(vector<int>&nums, int m , int dist , map<int,int> &freq){
        
        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        auto it = freq.begin();
        m-=1;
        while(it!=freq.end() && low<=high && m>0){
            it = freq.lower_bound(low+dist);
            if(it==freq.end())break;
            low = it->first;
            m--;
        }
        return m==0;
    }
    int maxDistance(vector<int>& position, int m) {
        //sort(position.begin(),position.end());
        
        
        map<int,int> umap;
        for(int i=0;i<position.size();++i){
            umap[position[i]]=1;
        }
        
        
        long low = 1, high = *max_element(position.begin(),position.end());
        long ans =0;
        while(low<=high){
            long mid = low + (high-low)/2;
            if(possible(position,m,mid,umap)){
                ans= mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        
        return (int)ans;
    }
};