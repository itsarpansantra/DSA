# include<iostream>
using namespace std;
void display(int a[]){ // here i call first display function
    for(int i=0;i<=4;i++){ //here we write a[] r jaygay *a . a[] indicate a pointer
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int b[]){ // here i chang the array element . then again i go display function
    b[3]=45;
}
int main(){
    int arr[5]={1,8,6,7,9};
    display(arr);
    change(arr);
    display(arr);
}