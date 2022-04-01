class Solution {
//      using recurssion
    public void swap(char[] s ,int  i ,int j){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    public void reverse(char[] s,int i , int j){
        if(i>=j) return;
        swap(s,i,j);
        reverse(s,i+1,j-1);
        
    }
    
    public void reverseString(char[] s) {
        // int i =0 , j= s.length-1;
        // while(i<j){
        //    char temp = s[i];
        //     s[i]=s[j];
        //     s[j]=temp;
        //     i++; j--;
        // }
        reverse(s,0,s.length-1);
    }
}