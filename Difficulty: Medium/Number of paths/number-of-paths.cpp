class Solution {
  public:
    int numberOfPaths(int m, int n) {
        // code here
          long long res = 1;
        int r = m - 1, t = m + n - 2; 

        for (int i = 1; i <= r; i++) {
            res = res * (t - r + i) / i;
        }
        return (int)res;
    }
};
