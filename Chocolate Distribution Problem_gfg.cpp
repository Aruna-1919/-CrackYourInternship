class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(),a.end());
    long long min_diff=INT_MAX;
    for(long long i=0;i<=n-m;i++){
        min_diff=min(min_diff,a[i+m-1]-a[i]);
    }
    return min_diff;
    }   
};
