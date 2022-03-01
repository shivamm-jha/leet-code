class Solution {
public:
    int sum_of_digits(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        while(n){
            
            int temp = sum_of_digits(n);
            cout<<temp<<" ";
            if(temp==1)return true;
            else n = temp;
            if(umap.find(temp)!=umap.end())return false;
            umap[temp]++;
        }
        return false;
    }
};