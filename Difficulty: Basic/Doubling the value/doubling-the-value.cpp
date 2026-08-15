class Solution {
  public:
    int solve(int b, vector<int> &arr) {
        // code here.
        long long sum=b;
        for (int i=0;i<arr.size();i++){
            if (arr[i]==sum){
                sum*=2;
            }
        }
        return sum;
    }
};