// parameterice means extra veriable
// # include<iostream>
// using namespace std;
// void sum1TON(int sum,int p){ 
//     if(p==0){
//         cout<<sum<<endl;
//         return;
//     } 
//     sum1TON(sum+p,p-1);
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     sum1TON(0,n);
// }

// sum not using extra veriable



# include<iostream>
using namespace std;
int sum(int p){
    if(p==1) return 1;
    return p+sum(p-1);  
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sum(n);   
}