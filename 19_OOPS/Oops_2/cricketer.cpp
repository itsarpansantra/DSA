# include<iostream>
using namespace std;
class Cricketer{
public:
char name;
int age;
int match;
int avgScore;
};
int main(){

Cricketer pujara;
pujara.name='p';
pujara.age=36;
pujara.match=125;
pujara.avgScore=85;

Cricketer sachin;
sachin.name='s';
sachin.age=45;
sachin.match=200;
sachin.avgScore=90;

Cricketer cricketers[2]={pujara,sachin};
for(int i=0;i<2;i++){
    cout<<cricketers[i].name<<endl;
    cout<<cricketers[i].age<<endl;
    cout<<cricketers[i].match<<endl;
    cout<<cricketers[i].avgScore<<endl;
}
}
