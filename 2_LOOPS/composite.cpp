# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++){//i is a factor of n-1
        if(n % i == 0){    
        cout<<n<< " is a composite number";
        break;
        }
        else {
        cout<<n<< " is  not a composite number";
        break;
        }
    }
}