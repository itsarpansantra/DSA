/*
   1
  12
 123
1234
step1: my first loop will be run 1 to n
step2: my second loop also print space .first statement print n-1 number .i observe then print 1 to n-i
step3: third loop wil be 1 to i .i value increase loop increase
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    } 
}