# include<iostream>
using namespace std;
int square(int a){
    return a*a;
}
void firstNsquare(int b){
    for(int i=1;i<=b;i++){
        cout<<i<<" Square is: "<<square(i)<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    firstNsquare(n);
}