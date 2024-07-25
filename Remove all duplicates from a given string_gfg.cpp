class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string ans="";
	    unordered_map<char,int> map;
	    int n=str.length();
	    for(int i=0;i<n;i++){
	        if(map[str[i]]==0){
	            ans+=str[i];
	        }
	        map[str[i]]+=1;
	    }
	    return ans;
	}
};
