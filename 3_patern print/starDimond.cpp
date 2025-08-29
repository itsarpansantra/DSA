/*
   *
  ***
 *****
*******
 *****
  ***
   *
step1: we run 3 loop . first loop run 1 to 2*n-1. because when print a dimond star increase everyline +2
step2: second loop run 1 to n-1 . because our first place space n-1
step3: if i less then n-1 . so we do nsp-- else nsp++
step 4: third loop run 1 to nst and increase
step5: if i less then n-1 so nst increase n+=2 else nst-=2 
*/
# include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int nsp=n-1;
int nst=1;
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }
    if(i<=n-1) nsp--;
    else nsp++;
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    if(i<=n-1) nst+=2;
    else nst-=2;
    cout<<endl;
}
}