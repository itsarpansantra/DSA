# include<iostream>
using namespace std;
// int binaryToDecimal(string &str){
//     int n =str.length();
//     int sum =0;
//     int x=1;
//     for(int i=n-1;i>=0;i--){
//         char ch = str[i]; // my first charector 0 or 1
//         int num = ch - '0'; // charecter convert into number
//         sum+=num*x;
//         x*=2;
//     }
//     return sum;
// }
// int main(){
//     string str ="1011";
//     cout<<binaryToDecimal(str)<<" ";
// }

int binaryToDecimal(string &str){
    int n =str.length();
    int sum =0;
    for(int i=n-1;i>=0;i--){
        char ch = str[i]; // my first charector 0 or 1
        int num = ch - '0'; // charecter convert into number
        sum+=num*(1<<(n-1-i));
    }
    return sum;
}
int main(){
    string str ="1";
    cout<<binaryToDecimal(str)<<" ";
}