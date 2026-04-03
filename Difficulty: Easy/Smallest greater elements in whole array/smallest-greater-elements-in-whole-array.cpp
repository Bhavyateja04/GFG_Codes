int* greaterElement(int arr[], int n) {
    // Complete the function
     int* q = new int[n];
       int* p = new int[n];
       for(int i = 0;i<n;i++){
            p[i] = arr[i];
       }
       unordered_map<int,int> count;
       int kcount = 0;
       sort(arr,arr+n);
       for(int i = 0;i<n;i++){
            count[arr[i]]++;
            if(count[arr[i]] == 1){
                kcount++;
            }
       }
       int* r = new int[kcount];
       int k = 0;
       unordered_map<int,int> lcount;
       for(int i = 0;i<n;i++){
            lcount[arr[i]]++;
            if(lcount[arr[i]] == 1){
                r[k] = arr[i];
                k++;
            }
       }
       for(int i = 0;i<n;i++){
           int x = p[i];
           int s = 0;
           int e = kcount-1;
           int mid = s+(e-s)/2;
           while(s<=e){
             if(r[mid] == x){
                 break;
             }
             else if(r[mid] > x){
                 e = mid - 1;
             }
             else{
                 s = mid+1;
             }
             mid = s+(e-s)/2;
           }
          if(mid+1 >= kcount){
            q[i] = -10000000;
          } 
          else{
            q[i] = r[mid+1];
          }
      }
      return q;
}
