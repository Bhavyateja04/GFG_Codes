class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
         int total_profit = 0;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i-1] < arr[i]) {
                total_profit += arr[i] - arr[i-1];
            }
        }
        
        return total_profit;
    }
};