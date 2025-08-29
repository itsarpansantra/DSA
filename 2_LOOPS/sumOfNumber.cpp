# include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        int last_digit=n%10;
        sum = sum+last_digit;
        n=n/10;
    }
    
    cout<<sum;
}