class Solution {
  public:
    int getCandidate(int n, int k) {
        // code here
        int count=0;
        while(n >= k)
        {
            n = n/k;
            count++;
        }

        return pow(k,count);
    }
};