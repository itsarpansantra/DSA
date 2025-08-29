// print amstrong number 
# include<iostream>
using namespace std;
int main(){
 //1 to 500
   for(int i=1;i<=500;i++){
    int x=0 , temp =i;
    while (temp>0)
    {
        int p = temp%10;
        x+=p*p*p;
        temp/=10;
    }
    if(x==i) cout<<i<<endl;
   }
}