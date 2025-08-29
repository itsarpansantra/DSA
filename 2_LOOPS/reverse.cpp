
/*# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;       
    int last_digit=0;  
     while(n>0){
      last_digit=n%10;
      n=n/10;
      cout<<last_digit;
     }
}
*/
//Another processe
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;       
    int last_digit=0;
    int reverse=0;
    while(n>0){
      last_digit=n%10;
      reverse = reverse*10;
      reverse= reverse+last_digit;
      n=n/10;
    }
    cout<<reverse<<endl;
}