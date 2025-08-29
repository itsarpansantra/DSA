# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // display gp 3,12,48....upto n term
    int a=3,r=4;
    int product =1;
    for(int i =1;i<=n;i++){
        cout<<a<<endl;
        a=a*r;
    }
}
// another processes
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin >> n;
// int start = 3, r = 4;
// while (n--) {
// cout << start << " ";
// start *= r;
// }
// }