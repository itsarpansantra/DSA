# include<iostream>
using namespace std;
int main(){
float x;//-1.7
cin>>x;
int y = (int)x;//-1
if(y<0) y = y-1;//-2
float z = (float)y;// -2.0
x= x-z;//-1.7+2=0.3
cout<<x;
}