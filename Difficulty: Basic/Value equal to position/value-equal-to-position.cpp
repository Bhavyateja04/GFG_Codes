class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        vector<int>a;
        for(int i=0;i<arr.size();i++) {
            if(arr[i] == i+1) {
                a.push_back(arr[i]);
            }
        }
        return a;
    }
};