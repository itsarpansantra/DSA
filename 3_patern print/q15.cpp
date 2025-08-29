/*
*       *
 *     *
  *   *
   * *
    *
*/

// another processes 
# include<iostream>
using namespace std;
int main(){
    int n=5;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if(i==j)
        cout<<"*"; // 5*5 matrix print kore daba jar diagonal * print hoba
        else cout<<" ";
       }
        for(int k=1;k<=nsp-i;k++){
        cout<<" "; // print space after 5*5 . we want 3 space so condition thsi
       }
       for(int p=1;p<=n-i;p++){
        cout<<"*"; // after print space then we print a single *
        break; // first iteration done then loop close 
       }
        cout<<endl;
    }   
}


// # include<iostream>
// using namespace std;
// int main() {
// int n;
// cout<<"Enter a number: ";
// cin >> n;
// // Printing entire pattern except the bottommost star
// for(int i = 0; i < n-1; ++i) {
//     for(int j = 0; j < i; ++j) {
//         cout << " ";
//     }
//     cout << "*";
//     int m = 2 * (n - i - 1);
//         for(int j = 0; j < m-1; ++j) {
//             cout << " ";
//         }
//     cout << "*" << endl;
// }
// //Printing last star
// for(int i = 0; i < n-1; ++i) {
//     cout << " ";
// }
// for(int i=1;i<=n;i++){
//     if(i==n) cout<<"*"<<endl;
// }
// }

