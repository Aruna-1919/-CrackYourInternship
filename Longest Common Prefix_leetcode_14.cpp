class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=INT_MAX;
        for(string st:strs){
            n=min(n,(int)st.length());
        }
        int i=0;
        for(int i=0;i<n;i++){
            char curr=strs[0][i];
            for(string st:strs){
                if(st[i]!=curr){
                    return st.substr(0,i);
                }
            }
        }
        return strs[0].substr(0,n);
        
    }
};
