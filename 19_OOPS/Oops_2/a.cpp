# include<iostream>
using namespace std;

class player{
    private:
    int health;
    int score;
    bool alive;
    int age;

    public:

    void setHealth(int helath){
        this->health=health;
    }
    void setScore(int score){
        this->score=score;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    void setAge(int age){
        this->age=age;
    }

    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    bool getAlive(){
        return alive;
    }
    int getAge(){
        return age;
    }

};

int main(){
    player arpan;
    arpan.setHealth(69);
    arpan.setScore(89);
    arpan.setAlive(true);
    arpan.setAge(29);

    player souma;
    souma.setHealth(64);
    souma.setScore(87);
    souma.setAlive(true);
    souma.setAge(24);

    cout<<arpan.getAge()<<" " <<souma.getHealth()<<" "<<souma.getAlive();
}