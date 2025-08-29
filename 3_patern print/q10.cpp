/*
   1
  123
 12345
1234567
*/
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number: ";
cin >> n;
for(int i = 1; i<=n; i++) {
    int a=1;
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
        for(int j=1;j<=2*i-1;j++){
            cout<<a;
            a++;
        }
       
   cout << endl;
  }
}