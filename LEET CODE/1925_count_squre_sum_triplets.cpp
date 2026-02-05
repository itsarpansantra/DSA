/*

*/
# include<iostream>
# include<cmath>
using namespace std;
int squre_sum(int n){
    int count =0;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int k2 = i*i + j*j;
            int k = sqrt(k2);
            if(k*k==k2 && k<=n) count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<squre_sum(n);
}