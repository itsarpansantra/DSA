/*
*******
*** ***
**   **
*     *
step1: our first loop run 1 to 2*n-1. because our first line print as it is
step2: we declare m=n-1 . because our nest line print one less star
step3: we run 4 loop first loop run 1 to m .
step4: second and fourth loop print * . loop run 1 to m+1-j. 
ste5: third loop print space . we declare nsp =1. loop run 1 to nsp . then we inc. nsp+=2
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int j=1;j<=m;j++){
        for(int k=1;k<=m+1-j;k++){
            cout<<"*";
        }
        for(int p=1;p<=nsp;p++){
            cout<<" ";
        }
        nsp+=2;
        for(int k=1;k<=m+1-j;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}