# include<iostream>
using namespace std;
double area(int a){
    return 3.14*a*a;
}
int main(){
    int radius;
    cout<<"Enter redious: ";
    cin>>radius;
    cout<<"Area of circle is: "<<area(radius);
}