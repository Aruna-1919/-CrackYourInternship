class Solution {
public:
    void merge(vector<int>& arr,int left,int mid,int right){
        int n1=mid-left+1;
        int n2=right-mid;
        int* leftarray=new int[n1];
        int* rightarray=new int[n2];
        for(int i=0;i<n1;i++){
            leftarray[i]=arr[left+i];
        }
        for(int i=0;i<n2;i++){
            rightarray[i]=arr[mid+1+i];
        }
        int first=0;
        int second=0;
        int k=left;
        while(first<n1 && second<n2){
            if(leftarray[first]<rightarray[second]){
                arr[k++]=leftarray[first++];
            }
            else{
                arr[k++]=rightarray[second++];
            }
        }
        while(first<n1){
            arr[k++]=leftarray[first++];
        }
        while(second<n2){
            arr[k++]=rightarray[second++];
        }
        delete[] leftarray;
        delete[] rightarray;

    }
    void mergesort(vector<int>& arr,int left,int right,int& count){
        if(left<right){
            int mid=left+(right-left)/2;
            mergesort(arr,left,mid,count);
            mergesort(arr,mid+1,right,count);
            // befor merging we have to calculate the count
            int k=mid+1;
            for(int i=left;i<=mid;i++){
                while(k<=right && static_cast<int64_t>(arr[i]) > 2 * static_cast<int64_t>(arr[k])){
                    k+=1;
                }
                count+=k-mid-1;
            }
            merge(arr,left,mid,right);
        }
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        mergesort(nums,0,n-1,count);
        
        return count;
    }
};
