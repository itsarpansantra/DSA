// print factorial of 25 number and modulo the result 10^9+7
# include<iostream>
# include<vector>
using namespace std;
vector<long long int> factorial(int n){
    vector<long long int> fact(n+1,1); // n+1 size vector every element 1
        int mod = 1000000007;
        for(int i=2;i<=n;i++){
            fact[i]=((i%mod )* (fact[i-1]%mod) )%mod;
        }

    
    return fact;
}
int main(){
    vector<long long int>result = factorial(25);
    for(int i=0;i<result.size();i++){
        cout<<i<<" factorial is: "<<result[i]<<endl;
    }
}