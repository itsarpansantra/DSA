# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    int sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}