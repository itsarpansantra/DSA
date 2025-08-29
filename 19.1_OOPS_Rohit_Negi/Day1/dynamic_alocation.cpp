# include<iostream>
using namespace std;

class student{ 
    public: 
    string name;
    int age,roll_no;
    string grade;

};

int main(){
    //dynamic memory allocation 
    student *ptr = new student;
    (*ptr).name="Arpan";//set the value
    (*ptr).age=21;

    cout<<(*ptr).name<<" ";
    cout<<ptr->age<<" "; 
}
