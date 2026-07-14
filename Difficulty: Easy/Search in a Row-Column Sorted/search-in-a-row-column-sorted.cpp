class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        for(const auto row:arr){
            for(int val :row){
                if(val==x) return true;
            }
        }
        return false;
    }
};