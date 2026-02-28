class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
         int n = arr1.size();
        int m = arr2.size();
        
        int i = 0, j = m - 1;
        long long bestDiff = LLONG_MAX;
        
        vector<int> ans(2);

        while(i < n && j >= 0) {
            long long sum = (long long)arr1[i] + arr2[j];
            long long diff = abs(sum - x);

            if(diff < bestDiff) {
                bestDiff = diff;
                ans = {arr1[i], arr2[j]};
            }

            if(sum > x)
                j--;      // decrease sum
            else
                i++;      // increase sum
        }

        return ans;
    }
};