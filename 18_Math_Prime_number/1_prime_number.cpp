// say number is prime or not
# include<iostream>
# include<cmath>
using namespace std;
int fact=0; // global veriable
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) {
            fact=i;// ami dekhbo first kon number dia vag hochha.jodi hoy diba 
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<isPrime(n)<<endl;
    cout<<fact;
}