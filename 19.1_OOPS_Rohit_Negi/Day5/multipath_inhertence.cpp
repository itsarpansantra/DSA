# include<iostream>
using namespace std;
class Human{
    public:
    string name;

    void display(){
        cout<<"may name is : "<<name<<endl;
    }
};
class Engineer:public virtual Human{
    public:
    string specialization;
    void Work(){
        cout<<"i am specilization on : "<<specialization<<endl;

    }
};
class youuber : public virtual Human{ // multiple ak jinis ala virtual likhta . na hola alada vabba value
    public:
   int subcriber;
    void contentcreator()
    {
        cout<<"i have a subcriber base of : "<<subcriber<<endl;
    }
};

class codeTeacer:public youuber , public Engineer{
    public:
    int salary;

    codeTeacer(string name , string specialization,int subcriber,int salary){
        this->name=name; // vitual na likhla bujhta parba kon name ascha . bujhta parba ak name
        this->specialization=specialization;
        this->subcriber=subcriber;
        this->salary=salary;
    }

};
int main(){
    codeTeacer a1("arpan","CSE",2000,20000);
    a1.display();
}
