class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
         int n=mat.size();
        vector<pair<bool,int>>ans(n,{true,0});
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] && i!=j){
                   ans[i].first=false;
                   ans[j].second++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(ans[i].first && ans[i].second==n-1)return i;
        }
        return -1;
    }
};