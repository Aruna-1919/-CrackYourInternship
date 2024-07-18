class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int f=0;
        int s=0;
        while(s<len){
           if(nums[s]!=0){
            
            swap(nums[f],nums[s]);
            f++;
         
           }
           s++;
        }
        
    }
};
