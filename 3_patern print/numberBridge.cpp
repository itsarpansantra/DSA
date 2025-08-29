/*
1234567
123 567
12   67
1     7
step1: our first loop run 1 to 2*n-1. because our first line print as it is
step2: we declare m=n-1 . because our nest line print one less number
step3: we run 4 loop first loop run 1 to m . then declare a=1; a is another veriable
step4: second and fourth loop run 1 to m+1-j . inside increase a++
step5: third loop run 1 to nsp . we declare nsp = 1. we do same job a++ . because i want number start with 5 

*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int m=n-1;
    int nsp = 1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int j=1;j<=m;j++){
        int a=1;
        for(int k=1;k<=m+1-j;k++){
            cout<<a;
            a++;
        }
        for(int p=1;p<=nsp;p++){
            cout<<" ";
            a++;
        }
        nsp+=2;
       for(int k=1;k<=m+1-j;k++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}