// print number n times
# include<iostream>
using namespace std;
void call(int p){
    if(p==0) return ;
    cout<<"Arpan Santra"<<endl;
    call(p-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    call(n);
}