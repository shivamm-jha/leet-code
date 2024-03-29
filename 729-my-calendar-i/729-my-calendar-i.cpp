class MyCalendar {
public:
    vector<pair<int,int>> v;
    set<pair<int,int>> st;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
//         if(v.size()==0){
//             v.push_back({start,end});
//             return true;
//         }
        
//         for(int i=0;i<v.size();i++){
//             if(start<v[i].second && end > v[i].first)return false;
//         }
        
        
//         v.push_back({start,end});
//         return true;
        
        pair<int,int> event{start,end};
        auto nextEvent = st.lower_bound(event);
        
        if(nextEvent!=st.end() && nextEvent->first < end)return false;
        
        if(nextEvent!=st.begin()){
            auto prevEvent = prev(nextEvent);
            if(prevEvent->second > start)return false;
        }
        
        st.insert(event);
        return true;
        
    }
};
