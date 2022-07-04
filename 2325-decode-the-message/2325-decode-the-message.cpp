class Solution {
public:
    string decodeMessage(string key, string message) {
        string str ="";
        unordered_map<char,char> umap;
        umap[' ']=' ';
        int j =0;
        for(int i=0;i<key.size();i++){
            if(key[i]>='a' && key[i]<='z'){
                if(umap.find(key[i])==umap.end()){
                    umap[key[i]]=('a'+j);
                    j++;
                }
            }
        }
        
       
        for(int i=0;i<message.size();i++){
            str+= (umap[message[i]]);
        }
        return str;
    }
};