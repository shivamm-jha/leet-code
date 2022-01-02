class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        int arr[26]={0};
        set<int> st;
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
           
        }
        for(auto &i:arr){
            st.insert(i);
        }
        st.erase(0);
        sort(arr,arr+26);
        int flag=0;
        for(int i=0;i<25;i++){
            if(arr[i]!=0 && arr[i]==arr[i+1]){
                flag=1; break;
            }
        }
        
       if(flag==0)return 0;
        
         sort(arr, arr + 26, greater<int>());
       
       int count=0;
        for(int i=0;i<25;i++){
            for(int j=i+1;j<26;j++){
                if(arr[i]!=0 and arr[i]==arr[j]){
                    while(st.find(arr[j])!=st.end()){
                        arr[j]-=1;
                        count++;
                    }
                    // cout<<"arr:"<<endl;
                    // for(auto &i:arr)cout<<i<<" ";
                    // cout<<"set:"<<endl;
                    // for(auto &i:st)cout<<i<<" ";
                    // cout<<endl;
                    st.insert(arr[j]);
                    st.erase(0);
                }
            }
        }
        return count;
    }
};