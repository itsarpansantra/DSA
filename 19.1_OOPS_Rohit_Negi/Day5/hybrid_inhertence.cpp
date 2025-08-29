# include<iostream>
using namespace std;
//student
// boy
//girl
// male
//female 


class student{
    public:
    void print(){
        cout<<"I am a student"<<endl;
    }
};



class male{
    public:
    void maleprint(){
        cout<<"I am male "<<endl;
    }
};

class feMale{
    public:
    void feMaleprint(){
        cout<<"I am female "<<endl;
    }
};
class boy : public student,public male{
    public:
    void boyprint(){
        cout<<"I am a boy "<<endl;
    }
};

class girl : public student ,public feMale{
    public:
    void girlprint(){
        cout<<"I am a girl "<<endl;
    }
};
int main(){
    girl g1 ;
    g1.feMaleprint();
    g1.print();

    boy b1;
    b1.boyprint();
    b1.print();
}