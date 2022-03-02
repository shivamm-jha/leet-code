class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> right(nums2.size(),0);
        right[nums2.size()-1]= -1;
        int max_ele = nums2[nums2.size()-1];
        for(int i=nums2.size()-2;i>=0;i--){
            int flag=0;
            for(int j=i+1;j<nums2.size();j++){
                if(nums2[j]>nums2[i]){
                    flag=1;
                    right[i]=nums2[j];
                    break;
                }
            }
            if(flag==0)right[i]=-1;
        }
        
        unordered_map<int,int> umap;
        for(int i=0;i<nums2.size();i++){
            umap[nums2[i]]=right[i];
        }
        
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(umap[nums1[i]]);
        }
        return ans;
        
       
    }
};