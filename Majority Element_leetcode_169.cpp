class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>majority;
        int n=nums.size();
        for(int i=0;i<n;i++){
           majority[nums[i]]++;
        }
        for(auto key:majority){
            if(key.second>n/2){
                return key.first;
            }
        }
        return -1; 
      
    }
};
