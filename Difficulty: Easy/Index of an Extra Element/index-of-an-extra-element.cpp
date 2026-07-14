class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int low = 0, high = b.size() - 1;
        int index = a.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] == b[mid]) {
                low = mid + 1;
            } else {
                index = mid;
                high = mid - 1;
            }
        }
        return index;
    }
};