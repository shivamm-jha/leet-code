class MyCalendarThree {
public:
    
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
       int ans = INT_MIN;
       mp[start]++;
        mp[end]--;
        int sum =0;
        for(auto &it:mp){
            sum+= it.second;
            ans= max(sum,ans);
        }
        
        return ans;
    }
};
