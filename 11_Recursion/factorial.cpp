# include<iostream>
using namespace std;
int factorial(int p){
    if(p==0|| p==1) return 1;
    return p*factorial(p-1);  
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<factorial(n);   
}