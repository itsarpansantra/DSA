# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //1-2+3-4+5-6+.......upto n
    int sum=0;/*
    for(int i=1;i<=n;i++){
        if(n%2!=0){
            sum=sum+i;
        }
        else sum-=i;
        cout<<sum<<endl;
    }
    */
   if(n%2==0) sum = -n/2;
   else sum = -n/2+n;
   cout<<sum<<endl;
}