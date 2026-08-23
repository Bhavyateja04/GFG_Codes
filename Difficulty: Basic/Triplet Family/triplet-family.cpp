class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // code here
        int count[100001] = {0};
         for(int i = 0;i<arr.size();i++){
             count[arr[i]]++;
         }
         int c = -1;
         for(int i = 0;i<arr.size();i++){
             for(int j = i+1;j<arr.size();j++){
                 count[arr[i]]--;
                 count[arr[j]]--;
                 int a = arr[i] + arr[j];
                 if(count[a] >= 1){
                     return true;
                 }
                  count[arr[i]]++;
                  count[arr[j]]++;
             }
         }
         return false;
    }
};