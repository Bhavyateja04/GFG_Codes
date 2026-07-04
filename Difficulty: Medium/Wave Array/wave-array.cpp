class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
         int n = arr.size();
        int start=0,end=1;
        for(int i= 0;i<n;i++){
            if(end<=n-1){
                swap(arr[start],arr[end]);
                start=start+2;
                end=end+2;
            }
        }
    }
};