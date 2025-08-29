# include<iostream>
using namespace std;
void hannoi(int n , char a,char b,char c){
    // denote a =s(sourse) , b=h(helper) , c= d(destination)
    if(n==0) return;
    hannoi(n-1,a,c,b);
    // ami jakhn first change korbo takhn ami jachhi a->b karon a amar source b destinaton and c helper
    // ami c k helper hisaba dhorbo ar b k destination
    // taii swap kore dilam b ar c k
    cout<<a<<" -> "<<c<<endl;
    // amar jeta last sab thaka baro disk acha seta ami a->c te transfer kore debo
    hannoi(n-1,b,a,c);
    // amar baki j element gulo b te pore acha segulo dhakbo
    // tahola b amar source c destination ar a helper
    // sab samoy helper majha thaka taii b ar c k swap kore dilam 
    // karon b te element acha ar destination c
}
int main(){
    int n=3;
    hannoi(n,'A','B','C');
}