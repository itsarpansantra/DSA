// derived class
# include<iostream>
using namespace std;
// class human{
//     string name;
//     int age,weight;
// };

// class student:public human{ // child class
//     int rool_number,fees;
// };


// int main(){
//     student A;
// }

// class human{
//     protected:
//     string name;
//     int age,weight;
// };

// class student:public human{ // child class
//     int rool_number,fees;

    // only visual representation . exact code does't copy
//     // protected: // ai ta jast nicha akta tayree hoba 
//     // string name; 
//     // int age,weight;
// };


// int main(){
//     student A;
//     A.name="arpan"; // error ai janno dicha ami baira thaka protected k access korta parbo na

// }

// class human{
//     public:
//     string name;
//     int age,weight;
// };

// class student:protected human{ // child class
//     int rool_number,fees;
   

//     protected: // only visual representation
//     string name;
//     int age,weight;

//      // ami kono funstion banala baira thaka access korta parbo
//     public:
//     void fun(string n ,int a , int b){
//         name=n;
//         age=a;
//         weight=b;
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<weight<<endl;
//     }
// };


// int main(){
//     student A;
//     A.fun("Arpan",21,65);
//     A.display();
// }


// class human{
//     private:
//     string name;
//     int age,weight;
// };

// class student:protected human{ // child class
//     protected:
//     int rool_number,fees;
   
//      // ami private k access korta parbo na 
//     public:
//     void fun(string n ,int a , int b){
//         name=n;
//         age=a;
//         weight=b;
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<weight<<endl;
//     }
// };


// int main(){
//     student A;
//     A.fun("Arpan",21,65);
//     A.display();
//}


class human{
    protected:
    string name;
    int age,weight;
};

class student:private human{ // child class
    protected:
    int rool_number,fees;
   
    //visual repressentation 
    protected: 
    string name;
    int age,weight;
     
    public:
    void fun(string n ,int a , int b){
        name=n;
        age=a;
        weight=b;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};


int main(){
    student A;
    A.fun("Arpan",21,65);
    A.display();
}