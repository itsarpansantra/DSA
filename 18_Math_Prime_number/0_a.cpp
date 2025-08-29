# include<iostream>
# include<cmath>
# include<vector>
using namespace std;
// bool prime_count(int n){
//     if(n==1) return false;  
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
void prime_count(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--)
    {
        if(n%i==0) cout<<n/i<<" ";
    }
}
int main(){
    int n ;
    cout<<"enter a number: ";
    cin>>n;
    prime_count(n);
}

