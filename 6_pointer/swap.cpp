# include<iostream>
using namespace std;
void swap(int* ptr , int* ptr1){
    int temp=*ptr;
    *ptr=*ptr1;
    *ptr1= temp;
    return ;
}
int main(){
    int a,b;
    cout<<"Entr value for a: ";
    cin>>a;
    cout<<"Entr value for b: ";
    cin>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}