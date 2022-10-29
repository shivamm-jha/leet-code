class Solution {
public:
    static bool comp(pair<int,int>&a, pair<int,int>&b){
        
        return a.second>  b.second;
    }
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        if(plantTime.size()==1){
            return plantTime[0]+growTime[0];
        }
        vector<pair<int,int>> v;
        for(int i=0;i<plantTime.size();i++){
            v.push_back({plantTime[i],growTime[i]});
        }
        
        sort(begin(v),end(v), comp);
        int mxBloomTime=0, currTime=0;
        for(int i=0;i<v.size();i++){
            currTime += v[i].first;
            int bloomTime= currTime + v[i].second;
            mxBloomTime = max(mxBloomTime,bloomTime);
        }
        return mxBloomTime;
    }
};




// int currTime = 0, mxBloomTime = 0;
//         for (Flower flower : flowers)
//         {
//             currTime += flower.plantTime; 
//             int bloomTime = currTime + flower.growTime; //current flower will bloom at bloonTime
//             mxBloomTime = max(mxBloomTime, bloomTime);
//         }
//         //=======================================================
//         return mxBloomTime;