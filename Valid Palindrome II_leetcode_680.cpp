class Solution {
public:
    bool palindrome(string s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left+=1;
            right-=1;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        int k=1;
        while (left<right){
            if(s[left]!=s[right]){
                return palindrome(s,left+1,right) || palindrome(s,left,right-1);
            }
            left+=1;
            right-=1;
        }
        return true;
            
        
    }
};
