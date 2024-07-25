class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.length();
        unordered_map<char, char> map = { {')', '('}, {']', '['}, {'}', '{'} };
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' ||s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty() || st.top()!=map[s[i]]){
                    return false;
                }
                else{
                    st.pop();
                }
                
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
        
    }
};
