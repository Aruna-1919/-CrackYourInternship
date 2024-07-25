class Solution {
public:
    int strStr(string haystack, string needle) {
        int st=0;
        int en=0;
        int n=haystack.length();
        if(haystack.length()==needle.length()){
            if(haystack==needle){
            return 0;
            }
            return -1;
        }
        if(haystack.length()<needle.length()){
            return -1;
        }
        for(int i=0;i<=n-needle.length();i++){
            if(haystack.substr(i,needle.length())==needle){
                return i;
            }
        }
        return -1;
        
    }
};
