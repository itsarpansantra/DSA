# include<iostream>
using namespace std;
class Human{

    protected:
    string name;
    int age;

    public:
    Human(string  name , int age){
        this->name=name;
        this->age=age;
    }
    void work(){
        cout<<"I am working ";
    }
    void display(){
        cout<<name<<" "<<age<<"\n";
    }
};

class Student : public Human {
    int roll;
    int fees;

    public:
  
    Student(string  name , int age,int roll , int fees):Human(name,age){
        this->roll=roll;
        this->fees=fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll<<" "<<fees<<endl;
    }
    
};

class Teacher:public Human{
    int salary;
    public:
    Teacher(int salary , string name, int age):Human(name,age){
        this->salary=salary;
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};



int main(){
    Student a1("arpan",21,1,1000);
   a1.display();
   Teacher a2(20000,"souma",22);
    a2.display();

} // multiple chile one parent