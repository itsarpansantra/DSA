// print n fibonacci number
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int a=1 , b=1;
    cout<<a<<endl<<b<<endl;
   for(int i=3;i<=n;i++){
    int sum =a+b;
    cout<<sum<<endl;
    a=b;
   b=sum;
   }
}