# include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
bool flag = true; // true means prime
for(int i=2;i<=n-1;i++){
    if(n%i==0){// i is a factor
        flag = false; 
        // when code will be check any number divisible by i then flag also false
        // when code will be check any number not divisble by i code also brek first we declare flag = true . then print the statement
        // her we start 2 because 1 is not composit or nor prime
    }
}
if(n==1) cout << "1 is neither prime nor composite";
else if(flag == true) cout<<n <<" number is prime";
else cout<<n <<" number is composite";

}