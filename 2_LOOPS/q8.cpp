# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int last_digit=0;
    // first we take a number then we go for modulas we get last digit 
    //if last digit even then we add neither we don't add
    for(int i=1;i<=n;i++){
        last_digit=n%10;
        if(last_digit % 2==0){
            sum=sum+last_digit;
        }
        else 0;
        n=n/10;        
    }

     cout<<"sum is "<<sum<<endl;
}
//Another processes
// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int n;
// cin >> n;
// int sum = 0;
// while (n > 0) {
// int x = n % 10;
// sum += (x % 2 == 0 ? x : 0);
// n /= 10;
// }
// cout << sum;
// }