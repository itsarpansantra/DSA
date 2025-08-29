// WAP to print the sum of all the even digits of a given number
// Sample Input : 4556
//  Output: 10
# include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int i=0;
   int sum =0;
   while(n>0){
    int p=n%10;
    if(p%2==0) sum+=p;
    n/=10;
   }
   cout<<sum;
}