class Solution {
  public:
    void printPattern(int n) {
        // Code here
        for(int i=1;i<=n;i++){
            if(i==1){
                cout<<"*";
                
            }else if(i==n){
                for(int j=1;j<=n;j++){
                    cout<<"* ";
                }
            }else{
                cout<<"*";
                for(int j=1;j<=(2*i-3);j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
            
        }
    }
};