//square of n natural number
# include<iostream>
# include<vector>
using namespace std;
//vector<vector<int>> generate(int numRows) {
        
 //   }
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}
int combination(int n  , int r){
int ncr = fact(n)/(fact(r)*fact(n-r));
return ncr;
}
// int permutation(int n  , int r){
// int npr = fact(n)/fact(n-r);
// return npr;
// }
int main(){
    int n=5;
    //int r=3;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    
}
// #include<iostream>
// using namespace std;
// //hcf
// int hcf(int a , int b){
//    int count =0;
//    if(a>b) hcf(b,a);
//    for(int i=a;i<=b;i++){
//     if(i%2!=0){ count++;
//     cout<<i<<" ";
//     }
//    }
//    return count;
// }
// int main(){
//    int a=5;
//    int b=12;
//    cout<<hcf(a,b);
// }