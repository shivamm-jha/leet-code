class Solution {
public:
    int kthFactor(int n, int k) {
       vector<int> v1,v2;
        for(int i=1;i<=sqrt(n);i++){
            if ( n % i == 0 )
		{
			v1.push_back ( i );
			
			if ( i != sqrt ( n ) )
				v2.push_back ( n / i );
		}
        }
         reverse(v2.begin(),v2.end());
        if(k> (v1.size()+v2.size())) return -1;
       
        if(k<=v1.size()) return v1[k-1];
        else return v2[k-v1.size()-1];
        
    }
};