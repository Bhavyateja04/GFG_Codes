class Solution {
public:
    int closestToZero(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;
        int min_val = INT_MAX;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (abs(sum) < abs(min_val)) {
                min_val = sum;
            }
            else if (abs(sum) == abs(min_val)) {
                min_val = max(min_val, sum);
            }

            if (sum == 0) {
                return 0;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }

        return min_val;
    }
};