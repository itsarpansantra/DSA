/*
   A
  BAB
 CBABC
DCBABCD
*/
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number: ";
cin >> n;
for(int i = 1; i <= n; i++) {
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
        for(int j=i;j>=1;j--){
            cout<<(char)(j+64);
        }
        for(int p=1;p<i;p++){
            cout<<(char)(p+65);
        }
        
   cout << endl;
  }
}