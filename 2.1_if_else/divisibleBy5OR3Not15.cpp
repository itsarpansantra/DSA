# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n % 3 == 0 || n % 5 == 0){
        if(n % 15 != 0){
            cout<<"This number divisible by 3 or 5 but not divisible by 15";
        }
    }
    else{
        cout<<"This number not divisible by 3 or 5";
    }
}
