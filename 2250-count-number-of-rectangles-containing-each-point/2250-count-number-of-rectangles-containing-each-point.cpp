class Solution {
public:
    
    int bin(vector<int> &nums , int x){
        int start = 0 , end = nums.size()-1;
        int ans = nums.size();
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>=x){
                ans=mid;
                end = mid-1;
            }
            else start = mid+1;
        }
        return ans;
    }
    
     
    vector<int> countRectangles(vector<vector<int>>& nums, vector<vector<int>>& points) {
//         brute force T.c= 0(N^2) 
       vector<int> v;
        // for(int i=0;i<points.size();i++){
        //     int x=points[i][0] , y = points[i][1];
        //     int count =0;
        //     for(int j=0;j<nums.size();j++){
        //         if(x<= nums[j][0] && y<= nums[j][1]){
        //             count++;
        //         }
        //     }
        //     v.push_back(count);
        // }
        
        
//          binary search solution...
        
        unordered_map<int, vector<int>> umap;
        for(int i=0;i<nums.size();i++){
            int x = nums[i][0], y = nums[i][1];
            umap[y].push_back(x);
        }
        
        for(int i=0;i<=100;i++){
            sort(umap[i].begin(), umap[i].end());
        }
        
       
        
        for(int i=0;i<points.size();i++){
            int x = points[i][0] , y = points[i][1];
            int count =0;
            for(int j=y;j<=100;j++){
                if(umap.find(j)!=umap.end()){
                    //cout<<count<<endl;
                    count+=umap[j].size()-bin(umap[j],x);
                }
            }
            
            v.push_back(count);
        }
        
        return v;
//          unordered_map<int, vector<int>> htl;
//         // maps heights to all the lengths of rectangles with that height
        
//         for(int i=0; i<rect.size(); i++){       
//             htl[rect[i][1]].push_back(rect[i][0]);
//         }
        
// 		// have to sort the containers to apply binary search
//         for(int i=0; i<=100; i++){
//             sort(htl[i].begin(), htl[i].end());
//         }
        
		
//         vector<int> ans;
		
//         for(vector<int> p: points){
//             int x=p[0], y=p[1];
//             int ct=0;
//             for(int j= y; j<=100; j++){
//                 if(htl.find(j)!=htl.end()){
//                     ct+= htl[j].size()- binsear(htl[j], x);
// 					// binary search return the idx in array from which the values are >= x
// 					// the values at this and right of this are the lengths possible
// 					// so substract by size of array to get the number
//                 }
//             }
            
//             ans.push_back(ct);
            
//         }
        
//         return ans;
    }
};

