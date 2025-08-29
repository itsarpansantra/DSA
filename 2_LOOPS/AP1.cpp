// display AP 1,3,5,7,9 upto n terms
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<endl;
    }
    /*
     another processes
     int a= 1;
     for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;
     }
    */
}