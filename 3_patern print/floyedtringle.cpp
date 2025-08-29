/*
1
2 3
4 5 6
7 8 9 10
*/
// step1: we run 2 loop inner loop go 1 to n but outer loop run 1 to i
// step2: we declare a veriable outside k=1 . i increase his value in inner lopp . teh i see my patern

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}