class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int i=0;
        int ans=0;
        int j=arr.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                ans=mid+1;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};