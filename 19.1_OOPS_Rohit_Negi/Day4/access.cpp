# include<iostream>
using namespace std;

class human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void fun(){// within the class
        a=10;
        b=20;
        c=30;
    }
};
int main(){ // external class 
    human Arpan;
    Arpan.c=34;  // in my class only access c . because it is public

    Arpan.fun();// with in class i access all if it is protecte, public, private i access all.

    
}