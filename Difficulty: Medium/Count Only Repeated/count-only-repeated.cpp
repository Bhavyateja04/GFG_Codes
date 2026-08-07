class Solution {
public:
    int findSvc(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If duplicate is at mid
            if (mid + 1 < arr.size() && arr[mid] == arr[mid + 1])
                return mid;
            if (mid > 0 && arr[mid] == arr[mid - 1])
                return mid - 1;

            // Expected value at mid if no duplicate existed
            if (arr[mid] == arr[0] + mid)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }

    vector<int> findRepeating(vector<int>& arr) {
        int eleInd = findSvc(arr);

        if (eleInd == -1)
            return {-1, -1};

        int lw = lower_bound(arr.begin(), arr.end(), arr[eleInd]) - arr.begin();
        int up = upper_bound(arr.begin(), arr.end(), arr[eleInd]) - arr.begin();

        return {arr[eleInd], up - lw};
    }
};