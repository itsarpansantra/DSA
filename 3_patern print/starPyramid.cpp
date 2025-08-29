/*

    *
   ***
  *****
 *******
*********  
step1: our outer loop go 1 to n
step2: then print space 1 to n-i
step3: our third loop run 1 to i print this patern

   *
  **
 ***
****
step4: another loop run 1 to i-1 because first line no star print 
*/
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         for(int m=1;m<=i-1;m++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// another method
/*
 step1: we run 3 loop outer loop goes to 1 to n
 step2: second loop run for space print
 step3: third loop run 1 to 2*i-1 why ? because see the patern every row comes odd number *
*/
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// Another patern
// step1: we run 3 loop oour outer loop run 1 to n;
// step2: our second loop print space . here condition only one star others are space so condition n-1
// step3: third condition we insialize no of star =1 then increace +2 . third iteration our no of star 3
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int nst=1;// nst= no of star
    int nsp =n-1;// nsp = no of space
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        // star
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}