/*
1
AB
123
ABCD
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0) cout<<j;
            else  cout<<(char)(j+64);
        }
        cout<<endl;
    }
}