/*
   A
  ABC
 ABCDE
ABCDEFG
*/
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number: ";
cin >> n;
for(int i = 1; i <= n; i++) {
    int a=1;
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
        for(int j=1;j<=i*2-1;j++){
            cout<<(char)(a+64);
            a++;
        }
   cout << endl;
  }
}