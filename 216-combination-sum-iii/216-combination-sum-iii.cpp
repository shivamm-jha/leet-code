class Solution {
public:
    vector<vector<int>> ans;
    void subset(vector<int> &empty,int k,int n, int start){
//         if(i==k){
//             if(target==0){
//                 ans.push_back(empty);
//             }
//             return;
//         }
        
// //         pick the curr ele
        
//         if(target>= nums[i]){
//             empty.push_back(nums[i]);
//             subset(nums,empty,i+1,k,target-nums[i]);

//             empty.pop_back();
//         }
        
// //         don't pick the curr ele.
//         subset(nums,empty,i+1,k,target);
        
        // if(n<0) return;
        
        if(k==0){
            if(n==0){
                ans.push_back(empty);
            }
            return;
        }
        
        if(start==10)return;
        
//         pick 
        empty.push_back(start);
        subset(empty,k-1,n-start,start+1);
        empty.pop_back();
//         don't pick
        subset(empty,k,n,start+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        // vector<int> v={1,2,3,4,5,6,7,8,9};
        // vector<int> empty;
        // subset(v,empty,0,k,n);
        // return ans;
        
        vector<int> empty;
        subset(empty,k,n,1);
        return ans;
        
    }
};


// if(n<0)  return;
// 		if(k == 0){
// 			if(n == 0)  answer.push_back(temp);
// 			return;
// 		}
// 		if(start == 10)  return;

// 		temp.push_back(start);
// 		solve(k-1,n-start,temp,start+1);
// 		temp.pop_back();
// 		solve(k,n,temp,start+1);