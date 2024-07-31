class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       stack<string> st;
       string temp;
       while (ss >> temp) { 
            st.push(temp);
        }

       string ans="";
       while(!st.empty()){
        ans=ans+st.top();
        st.pop();
        if(!st.empty()){
            ans+=" ";
        }
       }
       return ans;
    }
};
