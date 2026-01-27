class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
          int n = arr.size();
        int xr = 0;
        for (int i = 0; i < n; i++) {
            xr ^= arr[i];
            xr ^= (i + 1);
        }

        int setBit = xr & -xr;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] & setBit)
                x ^= arr[i];
            else
                y ^= arr[i];

            if ((i + 1) & setBit)
                x ^= (i + 1);
            else
                y ^= (i + 1);
        }
        for (int num : arr) {
            if (num == x)
                return {x, y}; 
        }

        return {y, x}; 
    }
};