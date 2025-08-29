//Write a function to print squares of n natural numbers.
# include<iostream>
using namespace std;
//  int fun(int i){
//     return i*i;
//  }
void numSquare(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" square is : "<<i*i<<endl;
       // if we write i*i . here we use anathor function fun(i) 
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter no of element : ";
    cin>>n;
    numSquare(n);
}