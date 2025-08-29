# include<iostream>
using namespace std;
int main(){
    cout<<"Enter a integer number: ";
    int n;
    cin>>n;
    if(n<0){//When number is negative
        int m = (-1)*n;
        cout<<"This integer number is absolute";
    }
    else{
        cout<<"This number is absolute"; // number is positive
    }
}