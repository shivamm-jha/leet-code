class NestedIterator {
public:
    vector<int> ans;
    int x=0;
    NestedIterator(vector<NestedInteger> &List) 
    {
        Loop(List);
    }
    
    void Loop(vector<NestedInteger> &List)
    {
        int s=List.size();
        for(int i=0; i<s; i++)
            List[i].isInteger()?  ans.push_back(List[i].getInteger()) : Loop(List[i].getList());
    }
    
    int next() 
    {
        return ans[x++];
    }
    
    bool hasNext() 
    {
        return x < ans.size();
    }
};