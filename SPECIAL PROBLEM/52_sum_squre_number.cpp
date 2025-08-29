# include<iostream>
# include<cmath>
using namespace std;
bool perfectSquare(int n){ // let 9 
    int root= sqrt(n); // 3 
    if(root * root ==n ) return true; // 3*3=9 true
    else return false;
}
bool sum(int c){
    int x=0; // first always 0 dhorbo 
    int y=c; // second ta k sum dhorbo
    c=x+y;
    while(x<=y){ 
        if(perfectSquare(x) && perfectSquare(y) ) return true; //x,y r perfect root barola return 1 
        else if(!perfectSquare(y)){ // y perfect root na hola
            y=(int)(sqrt(y))*(int)(sqrt(y)); // perfect root bar korbo
            x=c-y; // x ta k change korbo
        }
        else { // x perfect root na hola 
           x= ((int)(sqrt(x))+1)*((int)(sqrt(x))+1); // perfect root bar korbo
           y=c-x; //y k change korbo
        }
    }
    return false; // perfect root na ala false  
}
int main(){
    int c;
    cout<<"Enter value for c: ";
    cin>>c;
    cout<<sum(c); //bascially its sum of two input
}