class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();

        int arrSum = 0;
        int currVal = 0;

        for (int i = 0; i < n; i++) {
            arrSum += arr[i];
            currVal += i * arr[i];
        }

        int maxVal = currVal;

        // Compute values for remaining rotations
        for (int i = n - 1; i >= 1; i--) {
            currVal = currVal + arrSum - n * arr[i];
            maxVal = max(maxVal, currVal);
        }

        return maxVal;
    }
};