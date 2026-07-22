class Solution {
  public:
    int countOnes(vector<int>& arr) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        int mid = 0;
        int index = -1; 
        while ( start <= end ) {
            mid = start + ( end - start ) / 2;
            if ( arr[mid] == 0 ) {
                index = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ( index >= 0 )? index : arr.size();
    }
};