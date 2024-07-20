// inplace
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first=m-1;
        int second=n-1;
        int k=m+n-1;
        while(first>=0 && second>=0){
            if(nums1[first]>nums2[second]){
                nums1[k--]=nums1[first--];
            }
            else{
                nums1[k--]=nums2[second--];
            }
        }
        while(second>=0){
            nums1[k--]=nums2[second--];
        }
        
    }
};
-----------------------------------------------------------------------------------------------------------
// using extra space
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int first=0;
        int second=0;
        while(first<m && second<n){
            if(nums1[first]<=nums2[second]){
                ans.push_back(nums1[first]);
                first++;
            }
            else{
                ans.push_back(nums2[second]);
                second++;
            }
        }
        while(first<m){
            ans.push_back(nums1[first]);
            first++;
        }
        while(second<n){
            ans.push_back(nums2[second]);
            second++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=ans[i];
        }
    }
  };
