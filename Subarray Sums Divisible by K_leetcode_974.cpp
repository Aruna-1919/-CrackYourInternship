class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> remainder;
        int prefix_sum=0;
        int rem=0;
        int count=0;
        remainder[0]=1;
        for(int num:nums){
            prefix_sum+=num;
            rem=prefix_sum%k;
            if (rem<0){
                rem+=k;
            } 
            count+=remainder[rem];
            remainder[rem]+=1;    
        }
        return count;
    }
};
