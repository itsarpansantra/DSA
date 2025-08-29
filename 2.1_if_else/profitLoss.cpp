#include<iostream>
using namespace std;
int main(){
    int cp,sp;// cp=cost price , sp = selling price
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit = "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"loss = "<<cp-sp;
    }
    else if(sp==cp){
        cout<<"No loss no profit";
    }

}