// how many odd number in a and b
# include<iostream>
using namespace std;
void oddNumber(int a,int b){
        if(a>b){
            oddNumber(b,a);
        }
        int count=0;
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                cout<<i<<" ";
                count++;
            }
            
        }
      cout<<endl;
      cout<<count;
}
int main(){
    int a,b;
    cout<<"Enter a number for a: ";
    cin>>a;
    cout<<"Enter a number for b: ";
    cin>>b;
    oddNumber(a,b);

}