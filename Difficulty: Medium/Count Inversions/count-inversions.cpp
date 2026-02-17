class Solution {
  public:
  
    long long merge(vector<int>& arr, int left, int mid, int right) {
        vector<int> temp;
        int i = left, j = mid + 1;
        long long inv = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                inv += (mid - i + 1); 
            }
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);

        for (int k = left; k <= right; k++)
            arr[k] = temp[k - left];

        return inv;
    }

    long long mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right) return 0;

        int mid = (left + right) / 2;

        long long inv = 0;
        inv += mergeSort(arr, left, mid);
        inv += mergeSort(arr, mid + 1, right);
        inv += merge(arr, left, mid, right);

        return inv;
    }

    long long inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};
