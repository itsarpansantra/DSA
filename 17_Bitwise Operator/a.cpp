# include<iostream>
# include<string>
using namespace std;
int main(){
    int n =29;
    int count =0;
    while(n>0){
        count++;
        n = n& n-1;
    }
    cout<<count;
}
