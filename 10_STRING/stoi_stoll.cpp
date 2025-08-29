# include<iostream>
# include<string>
using namespace std;
int main(){
    string  str="123456"; // store normal number
    int x = stoi(str);
    cout<<x<<endl;
    string  s="123456788546";
    long long y = stoll(s); // store big number 
    cout<<y<<endl;
}
