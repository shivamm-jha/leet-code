class Solution {
    public boolean backspaceCompare(String s, String t) {
        String s1= newString(s);
        String s2= newString(t);
       
        return s1.equals(s2);
    }
    
    String newString(String s){
        int n= s.length();
        String res="";
        int count =0;
        for(int i = n-1;i>=0;i--){
            if(s.charAt(i)=='#')count++;
            else if(count!=0)count--;
            else res+=s.charAt(i);
        }
        return res;
    }
}