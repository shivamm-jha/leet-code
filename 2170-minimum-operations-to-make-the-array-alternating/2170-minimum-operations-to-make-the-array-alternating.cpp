class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         int n = nums.size();
         unordered_map<int,int> umap1,umap2;
         for(int i=0;i<n;i++){
             if(i%2==0)umap1[nums[i]]++;
             else umap2[nums[i]]++;
         }
        
        vector<int> evenmax1(2,0);
        vector<int> evenmax2(2,0);
        vector<int> oddmax1(2,0);
        vector<int> oddmax2(2,0);
        for(auto &i:umap1){
            if(evenmax1[1]<= i.second)evenmax1={i.first,i.second};
        }
        umap1[evenmax1[0]]=0;
        for(auto &i:umap1){
            if(evenmax2[1] <= i.second) evenmax2={i.first,i.second};
        }
        
        for(auto &i:umap2){
            if(i.second >= oddmax1[1])oddmax1={i.first,i.second};
        }
        umap2[oddmax1[0]]=-1;
        
        for(auto &i:umap2){
            if(i.second>= oddmax2[1])oddmax2={i.first,i.second};
        }
        
        if(evenmax1[0]!=oddmax1[0]){
            return n - evenmax1[1] - oddmax1[1];
        }
        else{
            return n-max(evenmax1[1]+oddmax2[1],evenmax2[1]+oddmax1[1]);
        }
           
           
        return 1;
            
    }
    
};





//  for (auto i: mp1)   if(even_max1[1]<=i.second) { even_max1={i.first, i.second}; }
//         mp1[even_max1[0]]=0;
//         for (auto i: mp1)   if(even_max2[1]<=i.second) { even_max2[0]=i.first; even_max2[1]=i.second; }
        
//         for (auto i: mp2)   if(odd_max1[1]<=i.second) { odd_max1={i.first, i.second}; }
//         mp2[odd_max1[0]]=0;
//         for (auto i: mp2)   if(odd_max2[1]<=i.second) { odd_max2[0]=i.first; odd_max2[1]=i.second; }   
        
//         //cout<<even_max1[1] << " " << even_max2[1] << endl;
//         //cout<<odd_max1[1] << " " << odd_max2[1] << endl;
        
//         if(even_max1[0]==odd_max1[0])  return n-max(even_max1[1]+odd_max2[1],even_max2[1]+odd_max1[1]);
//         return n-even_max1[1]-odd_max1[1];