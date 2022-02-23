class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
//         time complexity 0(nlogn)... space complexity 0(n)
        
        
//        unordered_set<int> st;
//        for(auto &i:nums){
//           st.insert(i);
//        }
        
//         priority_queue<int> pq;
//         for(auto &i:st)pq.push(i);
//         if(pq.size()<3)return pq.top();
//         int count=2;
        
//         while(!pq.empty() &&  count--){
//             pq.pop();
//         }
//         return pq.top();
        
        
        
//         time complexity 0(n)... space complexity 0(1)
        
        long min = -2147483649;
        long max1st=min,max2nd=min,max3rd=min;
        for(auto &i:nums){
            if(i>max1st){
                
                max3rd = max2nd;
                max2nd = max1st;
                max1st =i;
            }
            else if(i>max2nd && i!=max1st){
                max3rd = max2nd;
                max2nd =i;
            }
            else if(i>max3rd && i!=max1st && i!=max2nd){
                max3rd =i;
            }
        }
        if(max3rd==min)return max1st;
        return max3rd;
    }
};


// if(n>max1st)
//             {
//                 max3rd=max2nd;
//                 max2nd=max1st;
//                 max1st=n;
//             }
//             else if(n>max2nd && n!=max1st)
//             {
//                 max3rd=max2nd;
//                 max2nd=n;
//             }
//             else if(n>max3rd && n!=max1st && n!=max2nd)
//             {
//                  max3rd=n;
//             }
//         }
        
//         if(max3rd==Long.MIN_VALUE)
//             return (int)max1st;
//         else
//             return (int)max3rd;