class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int size=arr.size();
        int count=0;
        for(int i=0; i<size; i++){
            int original=arr[i];
            int n=arr[i];
            int reverse=0;
            while(n>0){
                int digit=n%10;
                reverse=(reverse*10)+digit;
                n=n/10;
            }
            if(reverse==original){
                count++;
            }
        }
        if(count==size){
            return true;
        }
            return false;
    }
};