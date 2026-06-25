class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        long long res=0;
        long long MOD = 1e9 + 7;
        
        for(int i=0; i<arr.size(); i++){
          res = (res + (long long)i * arr[i]) % MOD;  
        }
        
        return (int)res;
    }
};