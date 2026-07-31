class Solution {
  public:
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
         int n=arr.size();
        int sum=0;
        
        for(int a:arr) sum+=a;
        int s1=(diff+sum)/2;
        
        if((sum+diff&1)) return 0;
        
        sum=s1;
        vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));
        
        for(int i=0;i<=n;i++) dp[i][0]=1;
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                dp[i][j]=dp[i-1][j];
                
                if(arr[i-1]<=j){
                    dp[i][j]+=dp[i-1][j-arr[i-1]]; 
                }
            }
        }
        
        return dp[n][sum];
    }
};