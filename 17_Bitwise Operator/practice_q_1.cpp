// given an integer n , find the maximum power of two that is smaller than one
// suppose ami akta number dibo tar nicha 2 r powerkato
// ex: input 24 . nicha 2 r power  16 . output 16
// ex2 : input :45 , output:32.
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int temp;
//     while(n!=0){
//         temp =n;
//         n = n & (n-1);
//     }
//     cout<<temp;
// }

// abar input er thaka baro chaila 
// ex1 :input: 24 output: 32
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int temp;
//     while(n!=0){
//         temp =n*2;
//         n = n & (n-1);
//     }
//     cout<<temp;
// }

// another processes
 
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    n = n|n>>1;
    n = n| n>>2;
    n = n| n>>4;
    n = n| n>>8;
    n = n| n>>16;
    int p= (n+1)>>1;
    cout<<p;
}