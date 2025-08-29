/*
ABCDEFG
ABC EFG
AB   FG
A     G
*/
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number: ";
cin >> n;
int nsp=1;
//int a=1;
for(int i=1;i<=2*n-1;i++){
    cout<<(char)(i+64);
}
cout<<endl;
for(int i = 1; i <= n; i++) {
    int a=1;
    for(int j=1;j<=n-i;j++){
            cout<<(char)(j+64);
           a++;
        }
    for(int k=1;k<=nsp;k++){
        cout<<" ";
        a++;
    }
    nsp+=2;
        for(int j=1;j<=n-i;j++){
            cout<<(char)(a+64);
           a++;
        }
   cout << endl;
  }
}