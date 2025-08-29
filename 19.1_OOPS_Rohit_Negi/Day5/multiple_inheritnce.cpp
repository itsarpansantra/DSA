# include<iostream>
using namespace std;
class Engineer{
    public:
    string specialization;
    void Work(){
        cout<<"i am specilization on : "<<specialization<<endl;

    }
};
class youuber{
    public:
   int subcriber;
    void contentcreator()
    {
        cout<<"i have a subcriber base of : "<<subcriber<<endl;
    }
};

class codeTeacer:public youuber , public Engineer{
    public:
    string name;

    codeTeacer(string name , string specialization,int subcriber){
        this->name=name;
        this->specialization=specialization;
        this->subcriber=subcriber;
    }
    void showcase(){
        cout<<" My name is: "<<name<<endl;
        Work();
        contentcreator();
    }
};
int main(){
    codeTeacer a1("arpan","CSE",2000);
    a1.showcase();
}