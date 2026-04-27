class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, long long s) {
        // Your code here
        int n=arr.size();
        long long sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(j<i && sum>s){
                sum-=arr[j];
                j++;
            }
            if(sum==s){
                return {j+1,i+1};
            }
        }
        return{-1};
    }
};
