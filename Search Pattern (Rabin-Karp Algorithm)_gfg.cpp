class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            
            int n = pattern.length();
            int m = text.length();
            vector<int> ans;
            for (int i = 0; i <= m - n; i++) {
                if (text.substr(i, n) == pattern) {
                    ans.push_back(i+1);
                }
            }
            return ans;
        }
     
};
