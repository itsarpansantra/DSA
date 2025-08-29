# include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int ncr = fact(n)/ (fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n,int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n,r;
    cout<<"Enter a number for n: ";
    cin>>n;
    cout<<"Enter a number for r: ";
    cin>>r;
    // int nfat=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    //int ncr = fact(n)/ (fact(r)*fact(n-r));
    int ncr = combination(n,r);
    int npr= permutation(n,r);
    cout<<ncr<<endl<<npr;
}

// using recursion
// # include<iostream>
// using namespace std;
// int fact(int n){
//   if(n==1||n==0)return 1;
//   return n*fact(n-1);
// }
// int combination(int n , int r){
//     return fact(n)/(fact(n-r)*fact(r));;
// }
// int permutation(int n , int r){
//     return fact(n)/ fact(n-r);
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int ncr = combination(n,r);
//     int npr = permutation(n,r);
//     cout<<ncr<<" "<<npr;
// }