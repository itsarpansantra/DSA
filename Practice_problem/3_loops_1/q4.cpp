//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=4;i<=4*n-1;i+=3){
         cout<<i<<" ";
    }
    
}