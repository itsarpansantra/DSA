# include<iostream>
# include<string>
# include<vector>
using namespace std;
//logrithamic power
// int odd_add(int a , int b){
//     //a to the power b
//     if(b==1) return a;
//     int ans = odd_add(a,b/2);
//     if(b%2==0) return ans*ans;
//     return ans*ans*a;
// }
// int fibo(int n){
//     if(n==0 || n==1) return 1;
//     return fibo(n-1)+fibo(n-2);
// }

void maze(int sr,int sc, int er,int ec, string s){
    if(sr>er ||sc>ec ) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
  
    maze(sr,sc+1,er,ec,s+'R');
    maze(sr+1,sc,er,ec,s+'D');
}
int main(){
    // int a;
    // cout<<"Enter a: ";
    // cin>>a;
    // int b;
    // cout<<"Enter b: ";
    // cin>>b;
    // cout<<odd_add(a,b);
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;
    // cout<<fibo(n);
    maze(1,1,3,3,"");
}
