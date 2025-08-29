# include<iostream>
using namespace std;

class student{ 
    string name;
    int age,roll_no;
    string grade;

    // here set the value using function getter and setter
    // here we denote public . neither it will not be acces
    public:

    void setname(string n){ // here set name
        name = n;
    }

    void setage(int a){
        age=a; // here set age 
    }

    //print the value
    void getname(){
        cout<<name<<" ";
    }

    //value print in main function
    int getage(){
        return age;
    }
};

int main(){
    student s1;

   s1.setname("Arpan"); // set name
   s1.setage(21); 
   s1.getname();

   // akhanao print korta pare 
    cout<<s1.getage()<<" ";

}
