/*
1234321
123 321
12   21
1     1

*/
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number: ";
cin >> n;
int nsp=1;
for(int i=1;i<=n;i++){
    cout<<i; 
}
for(int j=n-1;j>=1;j--){
    cout<<j;
}
cout<<endl;
for(int i = 1; i <= n; i++) {
    for(int j=1;j<=n-i;j++){
            cout<<j;
        }
    for(int k=1;k<=nsp;k++){
        cout<<" ";
    }
    nsp+=2;
        for(int j=n-i;j>=1;j--){
          cout<<j;
     }
   cout << endl;
  }
}