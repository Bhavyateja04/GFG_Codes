#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Two spaces for proper alignment
            }
        }
        cout << endl;
    }
    return 0;
}