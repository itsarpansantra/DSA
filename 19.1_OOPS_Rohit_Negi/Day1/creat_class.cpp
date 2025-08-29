// creat class
# include<iostream>
using namespace std;

class student{ // student user defined datatype
    public: // means all are access . By default it is private
    string name;
    int age,roll_no;
    string grade;

};

int main(){
    student s1; // student -> datatpe . s1 -> object or veriable
    //suppose int a -> int is datatype and a is veriable . here we say object
    s1.name="Arpan";// here we write . so we acess this datatype
    s1.age =21;
    s1.roll_no=001;
    s1.grade ="A++";

    cout<<s1.age<<" ";//print s1 age 


    student s2; 
    s2.name="Deblina";
    s2.age =21;
    s2.roll_no=005;
    s2.grade ="A+";
    cout<<s2.name<<" ";
}