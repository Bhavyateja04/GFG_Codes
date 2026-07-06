class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int lastIndex=-1;
        int mini= INT_MAX;
        int lastVal=-1;
        for (int i=0; i< arr.size(); i++){
            if(arr[i]==x or arr[i]==y){
                if(lastIndex!=-1 and arr[i] != lastVal){
                      mini = min(mini, i - lastIndex);
                }
                lastIndex=i;
                lastVal= arr[i];
            }
            
        }
        return mini==INT_MAX ? -1: mini;
    }
};