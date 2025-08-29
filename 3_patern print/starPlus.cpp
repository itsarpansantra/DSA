/*
    *
    *
* * * * *
    * 
    * 
    
*/
// this type of patern basically posible odd number element
// step1: first we see b=n/2+1 number also print .
// step2: second we run 2 loop and compare row and column with b 
// step3: other place we print space
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n/2)+1 || j==(n/2)+1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}