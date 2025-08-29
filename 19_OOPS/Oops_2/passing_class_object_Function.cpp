# include<iostream>
using namespace std;
class player{
    private:
    int score;
    int age;
    int health;
    bool alive;
    public:
    void setScore(int score){ // setter
        this->score=score; // this mana ai class ter score
    }
    void setAge(int age){
        this->age=age;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    int getHelth(){ // getter
        return health;
    }
    int getScore(){
        return score;
    }
    int getAe(){
        return age;
    }
    int getIsAlive(){
        return alive;
    }
};
int addScore(player a ,player b){ // i create a function and get two player type parameter
 return a.getScore()+b.getScore();
}

// now i return a class 
player getMaxScore(player a,player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}

int main(){

player arpan;//object creaion statically // firs player
arpan.setAge(21);
arpan.setAlive(true);
arpan.setHealth(65);
arpan.setScore(85);

player deblina; // second player
deblina.setHealth(85);
deblina.setScore(95);
deblina.setAge(22);
deblina.setAlive(true);

cout<<addScore(arpan,deblina)<<endl;

player anyone = getMaxScore(arpan , deblina); // i creat another object and set the object
 // player function desnot print
cout<<anyone.getScore()<<endl;
cout<<anyone.getHelth()<<endl;
}
