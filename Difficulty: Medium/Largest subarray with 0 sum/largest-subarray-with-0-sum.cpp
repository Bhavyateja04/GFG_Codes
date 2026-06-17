class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
         int n = arr.size();
        int i = 0, sum = 0, maxi = 0;
        unordered_map<int, int> ump;
        
        while(i < n) {
            sum += arr[i];
            if(sum == 0) maxi = max(maxi, i+1);
            if(ump.find(sum) != ump.end()) {
                maxi = max(maxi, i - ump[sum]);
            }
            else ump[sum] = i; 
            i++;
        }
        return maxi;
    }
};