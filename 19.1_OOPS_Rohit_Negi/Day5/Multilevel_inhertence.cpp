# include<iostream>
using namespace std;

class person{

    protected:
    string name;
    public:
    void introduce(){
        cout<<"My name is : "<<name<<endl;
    }
};

class employee : public person{

    protected:
    int salary;
    public:
    void mysalary(){
        cout<<"my salary is: "<<salary<<endl;
    }

};

class manager: public employee{
    public:
    string  dept;
  
    manager(string name, int salary , string dept){
        this->name=name;
        this->salary=salary;
        this->dept=dept;
    }
    void display(){
        cout<<name<<" "<<salary<<" "<<dept<<endl;
    }

    void department(){
        cout<<"manager department is : "<<dept<<endl;
    }
};

int main(){
    manager a1("arpan",25000,"finance");
    a1.introduce();// parent public taii access korta parchi
    a1.mysalary(); // parent public taii acces korta parchi
    a1.department();// same
    a1.display();
}