# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int last_digit=0;
    int reverse=0;
    int a=n;
    while(n>0){
        last_digit=n%10;
        reverse=reverse*10;
        reverse=reverse+last_digit;
        n=n/10;
    }
    sum= a+reverse;
    cout<<sum<<endl;
}
//Another type
// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int n;
// cin >> n;
// int temp = n, x = 0;
// while (temp > 0) {
// x *= 10;
// x += (temp % 10);
// temp /= 10;
// }
// cout << n + x << endl;
// }