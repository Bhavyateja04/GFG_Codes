class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
         int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            if(l==r)return arr[l];
            int m=l+(r-l)/2;
            int len=r-m+1;
            int cnt=0;
            if(arr[m]==arr[m+1])cnt++;
            else{
              if(m==0 || arr[m]!=arr[m-1])return arr[m];
            }
            if(arr[r]==arr[r-1])cnt++;
            else{
              if(r==n-1 || arr[r]!=arr[r+1])return arr[r];
            }
            if((len-cnt)%2==0)r=m-1;
            else{
                l=m+1;
            }
        }
    }
};