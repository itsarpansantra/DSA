// if my input is 5 
// pascal tringle is 
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1       
1 5 10 10 5 1 
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        int current=1;
        for(int j=0;j<=i;j++){
            cout<<current<<" ";
            current = current *(i-j)/(j+1);
        }
        cout<<endl;
    }
}