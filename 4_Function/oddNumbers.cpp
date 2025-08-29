// how many odd number in a and b
# include<iostream>
using namespace std;
int oddNumber(int a,int b){
        if(a>b){
            oddNumber(b,a);
        }
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
      cout<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a number for a: ";
    cin>>a;
    cout<<"Enter a number for b: ";
    cin>>b;
    oddNumber(a,b);

}