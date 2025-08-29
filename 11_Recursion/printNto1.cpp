# include<iostream>
using namespace std;
void print(int p){ 
    cout<<p<<endl;
    if(p==1) return;
    print(p-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
}