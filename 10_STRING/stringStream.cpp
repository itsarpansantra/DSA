/*
Arpan
is
a
math
teacher
*/
# include<iostream>
# include<algorithm>
# include<string>
# include<sstream>
using namespace std;
int main(){
    string str ="Arpan   is a math teacher";
    stringstream ss(str); // asign the str
    string temp; // new string 

    while(ss>>temp){ // ss thaka temp input 
        cout<<temp<<endl;
    }
}