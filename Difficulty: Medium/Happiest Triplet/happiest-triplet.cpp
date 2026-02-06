class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
          sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        int i = 0, j = 0, k = 0;
        int bestDiff = INT_MAX;
        int bestSum = INT_MAX;
        vector<int> ans(3);

        while (i < a.size() && j < b.size() && k < c.size()) {
            int x = a[i], y = b[j], z = c[k];

            int currMax = max({x, y, z});
            int currMin = min({x, y, z});
            int diff = currMax - currMin;
            int sum = x + y + z;

            if (diff < bestDiff || (diff == bestDiff && sum < bestSum)) {
                bestDiff = diff;
                bestSum = sum;
                ans = {x, y, z};
            }

            // Move pointer of the minimum element
            if (currMin == x) i++;
            else if (currMin == y) j++;
            else k++;
        }

        sort(ans.begin(), ans.end(), greater<int>()); // decreasing order
        return ans;
    }
};