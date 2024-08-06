class Solution {
public:
    bool isNumber(string s) {
        bool digitflag=false;
        bool dotflag=false;
        bool eflag=false;
        int n=s.length();
        int plusminuscount=0;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                digitflag=true;
            }
            else if(s[i]=='.'){
                if( dotflag || eflag ){
                    return false;
                }
                
                dotflag=true;
            }
            else if(s[i]=='+' || s[i]=='-'){
                
                if(i>0 && s[i-1]!='e' &&  s[i-1]!='E'){
                    return false;
                }
                if(i==n-1 || (!isdigit(s[i+1]) && s[i+1] != '.')){
                    return false;
                }
                plusminuscount++;
            }
            else if(s[i]=='e' || s[i]=='E'){
                if(eflag ||i==n-1 || !digitflag){
                    return false;
                }
                eflag=true;
                digitflag=false;
            }
            else{
                return false;
            }
        }
        return digitflag;
        
    }
};
