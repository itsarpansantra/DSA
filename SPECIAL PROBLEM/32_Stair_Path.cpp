//this problem for a man only stair 1 or 2 (mana akta lok aksatha 1 ta siri ba 2 ta sirir dhap chorta parba )
// # include<iostream>
// using namespace std;
// int stair(int p){
//     if(p==1) return 1;
//     if(p==2) return 2;
//     return stair(p-1)+stair(p-2);  
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<stair(n);   
// }

// this is for 1 2 3
# include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    cout<<"Enter stair length: ";
    cin>>n;
    cout<<stair(n);
}