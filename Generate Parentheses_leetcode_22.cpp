class Solution {
public:
    void generation_backtrack(vector<string>& ans,string s,int n,int open_count,int close_count){
        if(s.length()==2*n){
            ans.push_back(s);
            return;
        }
        if(open_count<n){
            generation_backtrack(ans,s+'(',n,open_count+1,close_count);
        }
        if(close_count<open_count){
            generation_backtrack(ans,s+')',n,open_count,close_count+1);
        }
    }
    vector<string> generateParenthesis(int n) {
            vector<string> ans;
            generation_backtrack(ans,"",n,0,0);
            return ans;  
    }
};
