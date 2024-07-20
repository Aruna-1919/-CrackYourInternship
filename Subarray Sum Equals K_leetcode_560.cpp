class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefix;
        prefix[0]=1;
        int count=0;
        int prefix_sum=0;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            count+=prefix[prefix_sum-k];
            prefix[prefix_sum]+=1;
        }
        return count;     
    }
};
