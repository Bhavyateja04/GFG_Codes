class Solution {
  public:
    
    long long digitSum(long long x) {
        long long sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
    
    int getCount(int n, int d) {
        long long low = 1, high = n;
        long long firstValid = -1;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid - digitSum(mid) >= d) {
                firstValid = mid;
                high = mid - 1;  // try smaller
            } else {
                low = mid + 1;   // move right
            }
        }

        if (firstValid == -1)
            return 0;

        return n - firstValid + 1;
    }
};
