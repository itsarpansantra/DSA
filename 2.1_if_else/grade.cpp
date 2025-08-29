# include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    
    if(marks<30){
        cout<<"fail";

    }
    else if(marks<40){
        cout<<"Grade D";
    }
    else if(marks<50){
        cout<<"Grade C";
    }
    else if(marks<60){
        cout<<"Grade B";
    }
    else if(marks<70){
        cout<<"Grade A";
    }
    else if(marks<80){
        cout<<"Grade A+";
    }
    else if(marks<90){
        cout<<"Grade E";
    }
    else if(marks<=100){
        cout<<"Grade O"<<endl;
    }

    return 0;
}