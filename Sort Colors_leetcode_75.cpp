class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                if(low!=mid){
                    nums[low]=nums[low]^nums[mid];
                    nums[mid]=nums[low]^nums[mid];
                    nums[low]=nums[low]^nums[mid];
                }
                low++;
                mid++;
                
                
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                if(mid!=high){

                    nums[mid]=nums[high]^nums[mid];
                    nums[high]=nums[high]^nums[mid];
                    nums[mid]=nums[high]^nums[mid];
                }
                high--;
                
            }
        }
        
    }
};
