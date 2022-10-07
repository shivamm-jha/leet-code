class MyCalendarTwo {
public:
    map<int,int> umap;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
       umap[start]++;
        umap[end]--;
        
        
       

        int sum =0;
        
        for(auto &it: umap){
            sum+=it.second;
            if(sum>2){
                umap[start]--;
                umap[end]++;
                return false;
            }
        }
        
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */