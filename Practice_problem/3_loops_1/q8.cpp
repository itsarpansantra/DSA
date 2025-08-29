//  WAP to print the sum of a given number and its reverse
// Sample Input : 12
// Sample Output : 33 [12+21]
# include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int p=0;
   int temp=n;
   while(temp>0){
    p*=10;
    p+=temp%10;
    temp/=10;
   }
   cout<<p+n;
}