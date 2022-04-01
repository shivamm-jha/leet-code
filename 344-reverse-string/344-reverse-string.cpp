class Solution {
public:
    
//     recursive way
    void rev(vector<char>& s, int left , int right){
        if(left>=right)return ;
        swap(s[left++],s[right--]);
        rev(s,left,right);
    }
    
    void reverseString(vector<char>& s) {
        int n= s.size();
        // int l=0,r=n-1;
        // while(l<r){
        //     char temp = s[l];
        //     s[l]=s[r];
        //     s[r]=temp;
        //     l++; r--;
        // }
        
        rev(s,0,n-1);
    }
};