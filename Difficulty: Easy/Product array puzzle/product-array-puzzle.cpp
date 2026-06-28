class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
         int n=arr.size();
      
      vector<long long> leftProd(n, 1LL);
      vector<long long> rightProd(n, 1LL);
      
      for(int i=1; i<n; i++){
        leftProd[i]=1LL*leftProd[i-1]*arr[i-1];  
        rightProd[n-1-i]=1LL*rightProd[n-i]*arr[n-i];  
      }
      
      vector<int> ans(n, 1);
      for(int i=0; i<n; i++){
        ans[i]=(int)(leftProd[i]*rightProd[i]);  
      }
      
      return ans;
    }
};
