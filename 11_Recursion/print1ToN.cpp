// # include<iostream>
// using namespace std;
// void print(int i,int p){ 
//     if(i>p) return;
//     cout<<i<<endl; 
//     print(i+1,p);
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     print(1,n);
// }
// another processes
# include<iostream>
using namespace std;
void print(int p){    
    if(p==0) return;
    print(p-1);
     cout<<p<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
}