# include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks>30){
        if(marks>60){
            cout<<"Good passing marks "<<endl;
        }
        else{
          cout<<"AVG pass";
        }
    }    
    else{
        cout<<"fail";
    }

    return 0;

    }
