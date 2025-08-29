# include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter age: ";
    cin>>age;

    if(age<10){
        cout<<"Child"<<endl;

    }
     if(age<18){
        cout<<"Adult"<<endl;

    }

   if(age<25){
        cout<<"Mature"<<endl;

    }
     if(age<40){
        cout<<"Man"<<endl;

    }
     if(age>=60){
        cout<<"old"<<endl;

    }

    return 0;

}
