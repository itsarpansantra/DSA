# include<iostream>
using namespace std;
void result(int n, int* ptr1 , int* ptr2){
    *ptr2 = n%10;//last_digit
    while(n>9){
        n = n/10;
    }
    *ptr1=n;//first_digit
    return ;
}
int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int first_digit,last_digit;
   int *ptr1 = &first_digit;
   int *ptr2 = &last_digit;
   result(n,ptr1,ptr2);
   cout<< first_digit<<" "<<last_digit;
}