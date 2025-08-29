# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){ // print 1 to n all  number
        sum=sum+i;
        i++;
    }
    cout<<"Print the sum is: "<<sum<<endl;

    return 0;
}