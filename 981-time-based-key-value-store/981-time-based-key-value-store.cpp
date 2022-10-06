class TimeMap {
public:
    map<string,map<int,string>> mp;
    
 
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
//          linear search..
        
        // for(int i = timestamp;i>=1;i--){
        //     if(mp[key].find(i)!=mp[key].end()){
        //         return mp[key][i];
        //     }
        // }
        
        
//          we can optimise it by binary search..
        
         if (mp.find(key) == mp.end()) {
            return "";
        }
        
        auto it = mp[key].upper_bound(timestamp);
        // If iterator points to first element it means, no time <= timestamp exists.
        if (it == mp[key].begin()) {
            return "";
        }
        
        // Return value stored at previous position of current iterator.
        return prev(it)->second;
        
        
        
        
        
        // return "";
         
    }
};
