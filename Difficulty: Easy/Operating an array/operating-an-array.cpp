class Solution {
  public:
    bool searchEle(vector<int>& arr, int x) {
         for(int it: arr) if(it == x) return true;
        return false;
    }

    void insertEle(vector<int>& arr, int y, int yi) {
        // code here
        int n = arr.size();
        int temp = arr[yi];

        for(int i = yi; i<n; i++) {
            temp = arr[i];
            arr[i] = y;
            y = temp;
        }
        arr.push_back(y);
    }

        
    void deleteEle(vector<int>& arr, int z) {
        // code here
        int ind = 1e9, n = arr.size();
        for(int i = 0; i<n; i++){   
            if(arr[i] == z){
                ind = i;
                break;  
            }
        }

        for(int i = ind; i<n-1; i++) arr[i] = arr[i+1];
        if(ind != 1e9) arr.pop_back(); 
    }
};