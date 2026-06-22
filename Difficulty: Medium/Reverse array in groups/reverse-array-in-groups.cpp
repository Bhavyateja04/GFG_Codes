class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
         int len=arr.size();
        int remainLength=len;
        int count=0;
        int index=0;
        if(k>=len) reverse(arr.begin(), arr.end());
        else{
            while(remainLength>=k){
                reverse(arr.begin()+count*k, arr.begin()+count*k+k);
                count++;
                remainLength=remainLength-k;
            }
            if(remainLength>0) reverse(arr.begin()+count*k, arr.end());
        }
    }
};
