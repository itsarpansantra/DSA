// # include<iostream>
// using namespace std;
// class Human{

//     protected:
//     string name;
//     int age;

//     public:
//     void work(){
//         cout<<"I am working ";
//     }
// };

// class Student : public Human {
//     int roll;
//     int fees;

//     public:
//     Student(string name , int age , int roll , int fees){
//         this->name=name;
//         this->age=age;
//         this->roll=roll;
//         this->fees=fees;
//     }
// };

// int main(){
//     Student a1("arpan",21,1,1000);
//     a1.work();

// }

// ami human er kono object banaine tabuo acces korta parchi work function k
// human class public class copy hoye gacha . taii human er public section k student class er object acces korta parba



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
    // a1 object create korer samoy student constructor alam dekhlam tar aga human constructor call hoyecha . taii human aga access hoab

    Student(string  name , int age,int roll , int fees):Human(name,age){
        this->roll=roll;
        this->fees=fees;
    }
    // human class thaka access korta parchi 
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<" "<<fees;
    }
    // first ai display call hoba . jodi ata present na tahka takhn parent class jaba dia thakla print koraba.
};

int main(){
    Student a1("arpan",21,1,1000);
   a1.display();

}