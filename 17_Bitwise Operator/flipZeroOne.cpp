// 0 or k 1 a 1 k 0
// # include<iostream>
// using namespace std;
// int main(){
//     string str = "10011";
//     string s=" ";
//     for(int i=0;i<str.size();i++){
//         char ch = str[i];
//         if(ch=='0') s+='1';
//         else s+='0';
//     }
//     cout<<s;
// }


// another processes


# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
     
    n = n^(n>>1);
    n = n^(n>>2);
    n = n^(n>>4);
    n = n^(n>>8);
    n = n^(n>>16);

    cout<<n;
}