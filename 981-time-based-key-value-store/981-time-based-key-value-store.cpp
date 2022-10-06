class TimeMap {
public:
    map<string,map<int,string>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        for(int i = timestamp;i>=1;i--){
            if(mp[key].find(i)!=mp[key].end()){
                return mp[key][i];
            }
        }
        
        return "";
    }
};
