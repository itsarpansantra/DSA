# include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return ;
    cout<<"pre "<<n<<endl;
    pip(n-1);
    cout<<"in "<<n<<endl;
    pip(n-1);
    cout<<"post "<<n<<endl;
}
int main(){
    pip(3);   
}
// output
/*
pre 3
pre 2
pre 1
in 1
post 1
in 2
pre 1
in 1
post 1
post 2
in 3
pre 2
pre 1
in 1
post 1
in 2
pre 1
in 1
post 1
post 2
post 3
*/