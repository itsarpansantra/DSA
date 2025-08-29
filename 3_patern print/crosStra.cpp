 /*  
*     *
 *  *
   *
 *   *
*     *   
 */   
// this is only possible for odd number input
// step1: first we see if row and column number are equal this patern comes out
    //   *
    //    *
    //     *    
    //      *
    //       *
// step2: second we see row+colum = n+1 . then this patern print
    //      *
    //     *
    //    *
    //   *
    //  *         
    // other place print space
//     then full fill the patern
//  *   *
//   * *
//    *
//   * *
//  *   *
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if( i==j || (i+j)==n+1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

}