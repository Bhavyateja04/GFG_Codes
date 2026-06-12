// User function Template for C++

template <class T>
T largest(T arr[], int n) {

    // code here
    T maxi = arr[0];
  for(int i=1;i<n;i++){
      if(maxi < arr[i])
        maxi = arr[i];
  }
  return maxi;  
}