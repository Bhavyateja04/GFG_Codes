
class Solution {
    public String average(int arr[]) {
        // code here
          int sum = 0;
        
        for(int i = 0; i < arr.length; i++){
            sum += arr[i];
        }
        
        double avg = (double) sum / arr.length;
        
        // Format to 2 decimal places
        
        
        return String.format("%.2f",avg);
    }
}