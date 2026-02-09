class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
         int minIndex = 0;
    int minValue = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
    }
};