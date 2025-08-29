# include<iostream>
using namespace std;
void starTringle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    starTringle(3);
    starTringle(4);
    starTringle(7);
}