class FreqStack {
public:
    map<int,int> freqMap;
    map<int,stack<int>> setMap;
    
    
    FreqStack() {
        
    }
    int maxFreq = 0;
    void push(int val) {
        int freq = freqMap[val] +1;
        freqMap[val] = freq;
        maxFreq=max(maxFreq,freq);
        
        setMap[freq].push(val);
    }
    
    int pop() {
        int top = setMap[maxFreq].top();
        setMap[maxFreq].pop();
        
        freqMap[top]--;
        
        if(setMap[maxFreq].size()==0){
            maxFreq--;
        }
        return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */