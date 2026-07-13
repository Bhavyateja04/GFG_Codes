class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
         int n=arr.size();
        int l=0;
        int r=n-1;
        int ans=INT_MAX;
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[l]<=arr[m]){
              ans=min(ans,arr[l]);
              l=m+1;
            }
            else{
              ans=min(ans,arr[m]);
              r=m-1;
            }
        }
       return ans;
    }
};