# include<iostream>
using namespace std;
class Gun{ // datatype
    public:
    int ammo;
    int damage;
    int scope;
};
class player{

     class Ability{
        int level;
        int hp;

        public:

        int getlevel(){
            return level;
        }
        int gethp(){
            return hp;
        }
        void setlevel(int level){
            this->level=level;
        }
        void sethp(int hp){
            this->hp=hp;
        }
    };

    private:

    int health;
    int age;
    int score;
    bool alive;
    Gun gun; // like pointer

    Ability ability;

   
    public:

    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getAlive(){
        return alive;
    }
    Gun getGun(){ // we use a function Gun
        return gun;
    }

    void setHealth(int h){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    void setAbility(int level){
        Ability *ability=new Ability;
        ability->setlevel(level);
        int health=0;
        if(level==1){
            health=25;
        }
        else if(level==2){
            health=50;
        }
        else if(level==3){
            health=100;
        }
        else{
            cout<<" Error : in valid number ";
        }
        ability->sethp(health);
        this->ability=*ability;
    }

    void getAbility(){
        cout<<ability.gethp()<<endl;
        cout<<ability.getlevel()<<endl;
    }
};

int main(){
    player arpan;
    player souma;

    Gun phantom;
    phantom.ammo=40;
    phantom.damage=85;
    phantom.scope=2;

    arpan.setAge(20);
    arpan.setHealth(80);
    arpan.setScore(60);
    arpan.setAlive(40);
    arpan.setGun(phantom);
    arpan.setAbility(2);// 2 hochha level

    Gun vendel;
    vendel.ammo=60;
    vendel.damage=120;
    vendel.scope=4;

    souma.setAge(21);
    souma.setHealth(85);
    souma.setScore(40);
    souma.setAlive(65);
    souma.setGun(vendel);
    souma.setAbility(3);

    Gun gun123=arpan.getGun();
    cout<<gun123.ammo<<endl;
    cout<<gun123.damage<<endl;
    cout<<gun123.scope<<endl;

    cout<<endl;

    Gun gun124=souma.getGun();
    cout<<gun124.ammo<<endl;
    cout<<gun124.damage<<endl;
    cout<<gun124.scope<<endl;

    cout<<endl;

    arpan.getAbility();

    cout<<endl;

    souma.getAbility();
    
    
    // now set gun

    
}