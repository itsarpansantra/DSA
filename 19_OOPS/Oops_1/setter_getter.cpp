# include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    // setter : set the value using function . main function can access
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }

    // getter : to get the value . basically print the value
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    player arpan;
    arpan.setScore(95);
    arpan.setHealth(40);
    cout<<arpan.getScore()<<endl;
    cout<<arpan.getHealth()<<endl;
}