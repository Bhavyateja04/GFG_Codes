class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        int low,mid,high;
        
        if(n==1){
      return 0;  
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    if(arr[n-1]>arr[n-2]){
        return n-1;
    }
    low=1;high=n-2;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            return mid;
        }
         if(arr[mid] < arr[mid + 1]){
            low = mid + 1;
         }
        // Otherwise, it will exist in left subarray
        else{
            high = mid - 1;}
    }
    return -1;
        
    }
};