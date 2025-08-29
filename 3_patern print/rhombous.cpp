/*
    *****
   *****
  *****
 *****
*****
step1: my first loop will be run 1 to n
step2: my second loop also print space .first statement print n-i number .i observe then print 1 to n-i
step3: third loop wil be 1 to n .n value increase loop increase . full fill our patern
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
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}