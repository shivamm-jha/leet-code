class Solution {
public:
    string maximumTime(string time) {
        int n = time.size();
        if(time[0]=='?'){
            int temp = time[1]-'0';
            if(temp<4)time[0]='2';
            else if(time[1]=='?')time[0]='2';
            else time[0]='1';
        }
        if(time[1]=='?'){
            if(time[0]=='1')time[1]='9';
            else if(time[0]=='2'){
                if(time[3]=='0' and time[4]=='0')time[1]='4';
                else time[1]='3';
            }
            else if(time[0]=='0'){
                time[1]='9';
            }
        }
        
        if(time[3]=='?')time[3]='5';
        if(time[4]=='?')time[4]='9';
        return time;
        
    }
};