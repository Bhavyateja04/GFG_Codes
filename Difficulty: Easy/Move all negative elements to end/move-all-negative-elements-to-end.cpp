class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
       int n = arr.size();
        vector<int> temp(n);
        int idx = 0;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] >= 0) { 
                temp[idx++] = arr[i];
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] < 0) {
                temp[idx++] = arr[i];
            }
        }
        
        arr = temp;
    }
};