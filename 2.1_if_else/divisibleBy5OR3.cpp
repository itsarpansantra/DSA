# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter a number: ";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"This number divisible by 5 or 3";
    }
    else{
         cout<<"This number not divisible by 5 or 3";
    }

}