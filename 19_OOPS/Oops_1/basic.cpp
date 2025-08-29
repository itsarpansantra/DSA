# include<iostream>
class player{
    public:
    int score;
    int health;
    int century;
};
using namespace std;
int main(){
    player arpan;
    arpan.score=100;
    arpan.health=85;
    arpan.century=95;
    cout<<arpan.score<<endl;
    cout<<arpan.health<<endl;
    cout<<arpan.century<<endl;
}