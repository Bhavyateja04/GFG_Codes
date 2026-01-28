class Solution {
  public:
    void generate(int idx, int end, vector<int>& arr, long long sum,
                  unordered_map<long long, int>& mp) {
        if (idx == end) {
            mp[sum]++;
            return;
        }
        // Exclude current element
        generate(idx + 1, end, arr, sum, mp);
        // Include current element
        generate(idx + 1, end, arr, sum + arr[idx], mp);
    }

    int countSubset(vector<int> &arr, int k) {
        int n = arr.size();
        int mid = n / 2;

        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());

        unordered_map<long long, int> leftSums, rightSums;

        generate(0, left.size(), left, 0, leftSums);
        generate(0, right.size(), right, 0, rightSums);

        long long ans = 0;
        for (auto &p : leftSums) {
            long long sumLeft = p.first;
            long long need = k - sumLeft;
            if (rightSums.count(need)) {
                ans += (long long)p.second * rightSums[need];
            }
        }
        return (int)ans;
    }
};
