# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main(){
    string str = "arpan";
    cout<<str<<endl; 
    reverse (str.begin(),str.end());
    cout<<str<<endl;
   //if i want 1 to 3 reverse so we right . 1 to 3 means index
   reverse(str.begin()+1,str.begin()+4);
     cout<<str<<endl;
}