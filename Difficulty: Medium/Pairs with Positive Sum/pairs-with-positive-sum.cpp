class Solution {

  public:
    long long ValidPair(int a[], int n) {
        // Your code goes here
           sort(a, a+n);
        int i=0;
        int j= n-1;
        long long ans=0;
        while(i<j){
            long long sum= a[i] + a[j];
            if(sum<=0){
                i++;
            }
            if(sum>0){
                int left= j-i;
                ans= ans+left;
                j--;
            }
        }
        return ans;
    }
};