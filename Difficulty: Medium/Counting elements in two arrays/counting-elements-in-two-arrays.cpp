class Solution {
  public:
    int countLessThanOrEqual(int val, const vector<int>& arr) {
        int low = 0, high = arr.size();
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= val) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low; 
    }

    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        sort(b.begin(), b.end());  
        vector<int> ans;

        for (int x : a) {
            int count = countLessThanOrEqual(x, b);
            ans.push_back(count);
        }

        return ans;
    }
};