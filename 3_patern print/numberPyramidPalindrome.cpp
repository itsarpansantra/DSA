/*

   1
  121
 12321
1234321
step1: run 4 loop . outer loop run 1 to n
step2: second print space . run 1 to n-i
step3: then third loop print number . this loop run 1 to n . print this patern 
 
   1
  12
 123
1234
step4: 4Th loop run . we don't start with 1 . this the bigest problem . we start loop second iteration . so we start our loop i-1 and end
// if i-1 biger then 1 , so print the number ,and we decreace a number 
*/
# include<iostream>
using namespace std;
int main(){
    cout<< "Enter a number: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int m=i-1;m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
} 