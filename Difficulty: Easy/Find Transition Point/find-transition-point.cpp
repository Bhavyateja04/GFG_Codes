class Solution {
public:
    int transitionPoint(vector<int>& arr) {
        int n = arr.size();

        if (arr[0] == 1)
            return 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                return i;
            }
        }

        return -1;
    }
};