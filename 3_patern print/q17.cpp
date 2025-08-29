// input 4
// output
/*
   1
  2 2
 3   3
4     4
*/
# include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   for(int i=1;i<n;i++){ // run a  loop for first line
      cout<<" ";
   }
   cout<<1; // first 1
   cout<<endl;
   for(int i=1;i<=n-1;i++){ // run a loop for next n-1 line
      for(int j=1;j<=n-i-1;j++){ // for print space before 2
         cout<<" ";
      }
      cout<<i+1; // second line 2
      for(int k=1;k<=2*i-1;k++){
         cout<<" "; // second line after 2 print space 
      }
      cout<<i+1; // again 2 print
      cout<<endl;
   }
}