# include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return ;
   cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main(){
    zigzag(3);   
}
//output
//321112111232111211123