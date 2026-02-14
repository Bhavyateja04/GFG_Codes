class Solution {
public:
    bool canPaint(vector<int>& arr, int k, long long maxTime) {
        long long currSum = 0;
        int painters = 1;

        for (int board : arr) {
            if (currSum + board <= maxTime) {
                currSum += board;
            } else {
                painters++;
                currSum = board;

                if (painters > k)
                    return false;
            }
        }

        return true;
    }

    long long minTime(vector<int>& arr, int k) {
        long long low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canPaint(arr, k, mid)) {
                ans = mid;
                high = mid - 1;   // try smaller maximum
            } else {
                low = mid + 1;    // increase time
            }
        }

        return ans;
    }
};
