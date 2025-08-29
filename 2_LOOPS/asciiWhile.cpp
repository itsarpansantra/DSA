# include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<26){     //A to Z
        cout<<"ASCII value of "<<(char)(i+'A')<< " is "<<(int)(i+'A')<<endl;
        i++;
    }
}