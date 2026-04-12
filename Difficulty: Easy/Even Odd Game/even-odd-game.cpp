#include <iostream>
using namespace std;
string hello(int n){
    if(n%2==0){
        return "Friend";
    }else{
        return "You";
    }
    
}

int main() {
    // code here
    int n;
    cin>>n;
    cout<<hello(n)<<endl;
    

    return 0;
}