class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
         int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
    int t=0;
    int l=n/k;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second> l)
            t++;
        }
        return t;
    }
};