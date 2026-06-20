class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int a=0,b=0;
       for(int i=arr.size()-1;i>=0;i--){
           int c=max(arr[i]+b,a);
           b=a;
           a=c;
       }
       return a;
    }
};