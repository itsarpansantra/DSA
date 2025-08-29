/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
// step1: if we see this patern carefully row number and column number are same
// and when row and column both are odd and even print 1 other are 0
// we know odd+even=even
*/

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) k=0;
        else k=1;
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            if(k==0) k=1;
            else k=0;
        }
        cout<<endl;
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if((i+j)%2==0) cout<<1<<" ";
    //         else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }
}