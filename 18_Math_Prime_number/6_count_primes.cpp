// Given an integer n, return the number of prime numbers that are strictly less than n.
// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.


# include<iostream>
# include<vector>
# include<cmath>
using namespace std;
void fillzero(vector<bool>&v){
    int n = v.size()-1; // karon 2 thaka start korbo taii
    for(int i=2;i<=sqrt(n);i++){ // find prime number 
        for(int j=i*2;j<=n;j+=i){ // kotahay kothay prime er multiple acha 
            v[j]=0;// saikhana  0 put kore dao 
        }
    } 

}
int count_prime(int n){
    if(n<=2) return 0; // 2 r thaka choto hola seta prime noy
    n= n-1; // smallest prime bolacha taii akta kom hoba . prime oi number tao kao dhora noa hoy
    vector<bool>v(n+1,1); // 1 means prime , 0 menas composite
    fillzero(v);
    int count=0;
    v[0]=0;
    v[1]=0;
    for(int i=2;i<=n;i++){ // 1 kothay acha count korta hoba
        if(v[i]==1) count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<count_prime(n);
}