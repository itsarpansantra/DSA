// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
//Input : str = "Pbwcshkuiglhlds"
//Output : "P#w#s#k#i#l#l#s"
# include<iostream>
# include<string>
using namespace std;
int main(){
    string str ="Pbwcshkuiglhlds";
    int n=str.size();
    for(int i=0;i<n;i++){
        if(i%2!=0) str[i]='#';
    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    }

}