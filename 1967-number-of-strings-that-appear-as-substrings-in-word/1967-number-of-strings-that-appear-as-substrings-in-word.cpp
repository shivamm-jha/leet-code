class Solution {
public:
    int numOfStrings(vector<string>& p, string word) {
        int n = word.size();
        int count = 0;
        for(auto elem : p){
            if(word.find(elem) != std::string::npos){
                count++;
            }
        }
        
        return count;
        
    }
};

//  int count =0 ; 
//          for(auto elem : p)
//          {
//               if (word.find(elem) != std::string::npos)
//               {
//                    count++;
//               }
//          }
        
//         return count ;