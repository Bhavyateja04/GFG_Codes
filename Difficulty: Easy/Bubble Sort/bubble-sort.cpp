class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
};