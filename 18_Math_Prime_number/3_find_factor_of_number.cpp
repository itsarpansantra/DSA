// kono number kato gulo factor acha print korta hoba 
# include<iostream>
# include<vector>
# include<cmath>
using namespace std;
void prime(int n){
    for(int i=1;i<sqrt(n) ;i++){
        if(n%i==0) cout<<i<<" "; //first part
    }
    for(int i=sqrt(n);i>=0 ;i--){
        if(n%i==0) cout<<n/i<<" "; // second part 
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);
}