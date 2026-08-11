//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        if(mat.empty()) return 0;
        int count=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    count++;
                }
            }
        }
        return count;
    }
};