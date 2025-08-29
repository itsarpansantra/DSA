// input 
//output
/*
      *
     ***
    * * *  
   *  *  *
  *   *   *
 ***********
  *   *   *
   *  *  *
    * * *
     ***
      *
*/

# include<iostream>
using namespace std;
int main(){
  int n=5;
  int nsp=n;
 
  for(int i=1;i<=2*n+1;i++){
    
     for(int k=1;k<=nsp;k++){
     cout<<"s";
      
    }
   if(i<=n) nsp--;
      else nsp++;
      cout<<"*";
    
    for(int j=1;j<=2*n+1;j++){
      if(i==n+1) cout<<"*";
      else if( j>0){
        for(int m=1;m<i;m++){

        }
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
