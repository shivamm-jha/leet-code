class Solution {
public:
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 1, end = *max_element(piles.begin(),piles.end());
        while(start < end){
            int mid = start + (end-start)/2;
            int hourSpent = 0;
            for(int pile : piles){
                hourSpent += pile/ mid + (pile%mid !=0);
            }
            
            if(hourSpent<= h){
                end= mid;
            }
            else start =  mid+1;
        }
        
        return end;
    }
};